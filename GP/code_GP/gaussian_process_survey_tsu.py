# -*- coding: utf-8 -*-
"""
Created on Mon Jun  8 14:44:32 2020

@author: TSu
"""

print(__doc__)


import numpy as np
from matplotlib import pyplot as plt

from sklearn.gaussian_process import GaussianProcessRegressor
from sklearn.gaussian_process.kernels import (RBF)

from sklearn import preprocessing


np.random.seed(2234)

survey1 = np.loadtxt('dev_T-6852_actual.txt') #survey file



# Location of survey points (in terms of true depth)
X=np.atleast_2d(survey1[:,0]).T 

 # Location of query points here discretization of the well provided to the solver
x = np.atleast_2d(np.linspace(0,3943,2000)).T



############################# INCLINATION ANGLE #################################
## Observations and noise
y_incl = survey1[:,1]
dy_incl = 0.5 #0.02 #std_mes (can be specify as a vector)

kernel_incl=RBF(length_scale=20)

## Instantiate a Gaussian Process model
gp_incl = GaussianProcessRegressor(kernel=kernel_incl,alpha=dy_incl**2,n_restarts_optimizer=10) 

## Fit to data using Maximum Likelihood Estimation of the parameters
gp_incl.fit(X, y_incl)
print(gp_incl.kernel_)

## Make the prediction on the meshed x-axis (ask for MSE as well)
y_pred_incl, y_std_incl = gp_incl.predict(x, return_std=True)
y_samples_incl = gp_incl.sample_y(x, 5)

# Plot the function, the prediction and the 99% confidence interval based on the MSE
plt.figure()
#plt.errorbar(X, y_incl, 3*0.02, fmt='r.', markersize=10, label='Observations')
plt.plot(x, y_pred_incl, 'b-', label='Prediction')
plt.fill(np.concatenate([x, x[::-1]]),
         np.concatenate([y_pred_incl - 3 * y_std_incl,
                        (y_pred_incl+ 3 * y_std_incl)[::-1]]),
         alpha=.5, fc="dimgrey", label='99% confidence interval')
plt.plot(x, y_samples_incl, lw=1,label='samples')
plt.legend(loc='upper left')
plt.show()
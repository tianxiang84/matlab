#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Wed May  6 21:13:23 2020

@author: pampasgiolu
"""

##### Ressource
#https://scikit-learn.org/stable/auto_examples/gaussian_process/plot_gpr_noisy_targets.html#sphx-glr-auto-examples-gaussian-process-plot-gpr-noisy-targets-py

print(__doc__)


import numpy as np
from matplotlib import pyplot as plt

from sklearn.gaussian_process import GaussianProcessRegressor
from sklearn.gaussian_process.kernels import (RBF)

from sklearn import preprocessing


np.random.seed(2234)

survey1 = np.loadtxt('dev_T-6852_actual.txt') #survey file


def coorGeo(X_l,X_incl,X_azi):
    r = X_l[1:]-X_l[:-1]
    
    cond=X_azi > 360
    X_azi[cond]=X_azi[cond]-360

    
    X=np.zeros((len(X_l),))
    Y=np.zeros((len(X_l),))
    Z=np.zeros((len(X_l),))
    
    # get lengths of the separate segments 
    phi = X_azi[1:]
    theta = X_incl[1:]
    
    # convert to radians
    phi = phi * np.pi / 180.
    theta = theta * np.pi / 180.
    
    x = r*np.cos(phi)*np.sin(theta)
    y = r*np.sin(phi)*np.sin(theta)
    z = r*np.cos(theta)
    
    # np.cumsum is employed to gradually sum resultant vectors
    X[1:]=np.cumsum(x).flatten()
    Y[1:]=np.cumsum(y).flatten()
    Z[1:]=-np.cumsum(z).flatten()
    
    return (X,Y,Z)



############################ AZIMUTH ANGLE #################################

survey1_scaled = preprocessing.scale(survey1[:,2])

# Weird transformation to avoid high jumps (has to be improved)
cond1=survey1[:,2] <90
survey1[cond1,2]=survey1[cond1,2]+360

# Rescaling to [0,1] for better convergence
scaler1 = preprocessing.StandardScaler().fit(survey1[:,2].reshape(-1,1))
survey1_scaled = scaler1.transform(survey1[:,2].reshape(-1,1))

# Location of survey points (in terms of true depth)
X=np.atleast_2d(survey1[:,0]).T 

 # Location of query points here discretization of the well provided to the solver
x = np.atleast_2d(np.linspace(0,3943,2000)).T

## Observations and noise
y = survey1_scaled.flatten()

# Rescaled noise vector corresponding to a 0.1° std noise
dy = 0.1/scaler1.scale_ #(can be specify as a vector)

# RBF GP kernel with correlation length of length_scale
kernel=RBF(length_scale=20)

## Instantiate a Gaussian Process model

# With fixed correlation length:
gp = GaussianProcessRegressor(kernel=kernel,alpha=dy**2,optimizer=None) 

# OR with optmized correlation length:
#gp = GaussianProcessRegressor(kernel=kernel,alpha=dy**2,n_restarts_optimizer=100) 

## Fit to data using Maximum Likelihood Estimation of the parameters
gp.fit(X, y)
print(gp.kernel_)

## Make the prediction on the meshed x-axis (ask for MSE as well)
y_pred, y_std = gp.predict(x, return_std=True) 

## Draw 5 samples
y_samples = gp.sample_y(x, 5)


y_std_not_scaled=y_std*scaler1.scale_

# Plot the function, the prediction and the 99% confidence interval based on the MSE

y_not_scaled=survey1[:,2]
y_samples_not_scaled=scaler1.inverse_transform(y_samples)
y_pred_not_scaled=scaler1.inverse_transform(y_pred)

plt.figure()
plt.errorbar(X, y_not_scaled, 3*0.1, fmt='r.', markersize=10, label='Observations')
plt.plot(x, y_pred_not_scaled, 'b-', label='Prediction')
plt.fill(np.concatenate([x, x[::-1]]),
         np.concatenate([y_pred_not_scaled - 3 * y_std_not_scaled,
                        (y_pred_not_scaled + 3 * y_std_not_scaled)[::-1]]),
         alpha=.5, fc="dimgrey", label='99% confidence interval')
plt.plot(x, y_samples_not_scaled, lw=1,label='samples')
plt.legend(loc='upper left')
plt.show()


############################# INCLINATION ANGLE #################################


## Observations and noise
y_incl = survey1[:,1]
dy_incl =0.02 #std_mes (can be specify as a vector)

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
plt.errorbar(X, y_incl, 3*0.02, fmt='r.', markersize=10, label='Observations')
plt.plot(x, y_pred_incl, 'b-', label='Prediction')
plt.fill(np.concatenate([x, x[::-1]]),
         np.concatenate([y_pred_incl - 3 * y_std_incl,
                        (y_pred_incl+ 3 * y_std_incl)[::-1]]),
         alpha=.5, fc="dimgrey", label='99% confidence interval')
plt.plot(x, y_samples_incl, lw=1,label='samples')
plt.legend(loc='upper left')
plt.show()


##############################################################################
############################ PLOT 3D GEOMETRY ################################
##############################################################################


X_l=survey1[:,0]
X_incl=survey1[:,1]
X_azi=survey1[:,2]

cond=X_azi > 360
X_azi[cond]=X_azi[cond]-360

fig = plt.figure()
ax = fig.gca(projection='3d')
# several data points 

(X,Y,Z)=coorGeo(X_l,X_incl,X_azi)

cond=y_pred_not_scaled > 360
y_pred_not_scaled[cond]=y_pred_not_scaled[cond]-360

cond=y_samples_not_scaled[:,0] > 360
y_samples_not_scaled[cond,0]=y_samples_not_scaled[cond,0]-360

cond=y_samples_not_scaled[:,1] > 360
y_samples_not_scaled[cond,1]=y_samples_not_scaled[cond,1]-360

cond=y_samples_not_scaled[:,2] > 360
y_samples_not_scaled[cond,2]=y_samples_not_scaled[cond,2]-360

cond=y_samples_not_scaled[:,3] > 360
y_samples_not_scaled[cond,3]=y_samples_not_scaled[cond,3]-360

cond=y_samples_not_scaled[:,4] > 360
y_samples_not_scaled[cond,4]=y_samples_not_scaled[cond,4]-360

(X_pred,Y_pred,Z_pred)=coorGeo(x.flatten(),y_pred_incl.flatten(),y_pred_not_scaled.flatten())
(X_s1,Y_s1,Z_s1)=coorGeo(x.flatten(),y_samples_incl[:,0].flatten(),y_samples_not_scaled[:,0].flatten())
(X_s2,Y_s2,Z_s2)=coorGeo(x.flatten(),y_samples_incl[:,1].flatten(),y_samples_not_scaled[:,1].flatten())
(X_s3,Y_s3,Z_s3)=coorGeo(x.flatten(),y_samples_incl[:,2].flatten(),y_samples_not_scaled[:,2].flatten())
(X_s4,Y_s4,Z_s4)=coorGeo(x.flatten(),y_samples_incl[:,3].flatten(),y_samples_not_scaled[:,3].flatten())
(X_s5,Y_s5,Z_s5)=coorGeo(x.flatten(),y_samples_incl[:,4].flatten(),y_samples_not_scaled[:,4].flatten())

 
ax.plot(X,Y,Z)
ax.plot(X_pred,Y_pred,Z_pred)
ax.plot(X_s1,Y_s1,Z_s1)
ax.plot(X_s2,Y_s2,Z_s2)
ax.plot(X_s3,Y_s3,Z_s3)
ax.plot(X_s4,Y_s4,Z_s4)
ax.plot(X_s5,Y_s5,Z_s5)





% Test the formulae for weight space view of GP
% Test y = sin(3x) + x^(0.5)

% Plot what the function looks like
clear;
x = -10:0.01:10; % x
y = sin(3*x) + abs(x).^(0.5);
plot(x,y); hold on;

% Generate training data
rng(1323);
xtrain=[];
ytrain=[];
for i=1:1:100
    xtrain = [xtrain,20.0*rand(1)-10];
    ytrain = [ytrain, sin(3*xtrain(end)) + abs(xtrain(end)).^(0.5) + 0.3*randn(1)];
end
plot(xtrain,ytrain,'rx'); hold on;


% Design vector
Phi = [];
for i=1:1:length(xtrain)
    xc = xtrain(i);
    
    phi=[];
    for i=1:1:10
        phi = [phi; xc^(i-1)];
    end
    Phi = [Phi, phi];
end
SigmaP = 10.0*eye(10); % Prior on weight
inv(SigmaP)
%Ainv = 
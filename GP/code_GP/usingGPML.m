
clear;
x = 5*gpml_randn(0.8,20,1);
y = sin(3*x) + 0.1*gpml_randn(0.9, 20, 1);
n = 1000;
xs = linspace(-10,10,n)';

meanfunc = [];
covfunc = @covSEiso;
likfunc = @likGauss;

hyp = struct('mean',[], 'cov', [0,0], 'lik', -1);
hyp2 = minimize(hyp, @gp, -100, @infGaussLik, meanfunc, covfunc, likfunc, x, y);

[mu s2] = gp(hyp2, @infGaussLik, meanfunc, covfunc, likfunc, x, y, xs);

f = [mu+2*sqrt(s2); flipdim(mu-2*sqrt(s2),1)];
  fill([xs; flipdim(xs,1)], f, [7 7 7]/8)
  hold on; plot(xs, mu); plot(x, y, '+')
  
% y = 1 + x*5e-2 + sin(x)./x + 0.2*randn(n,1);
% 
% 
% fileID = fopen('dev_T-6852_actual.txt','r');
% %data = fscanf(fileID,'%f %f %f\n');
% %fclose(fileID);
% formatSpec = '%f%f%f%[^\n\r]';
% delimiter = '\t';
% dataArray = textscan(fileID, formatSpec, 'Delimiter', delimiter, 'TextType', 'string',  'ReturnOnError', false, 'CollectOutput',1);
% data = dataArray{1,1};
% x = data(:,1);
% y = data(:,2);
% 
% %% Close the text file.
% fclose(fileID);
% 
% 
% 
% 
% 
% gprMdl = fitrgp(x,y,'Basis','linear',...
%       'FitMethod','exact','PredictMethod','exact');
% ypred = resubPredict(gprMdl);
% 
% plot(x,y,'b.');
% hold on;
% plot(x,ypred,'r','LineWidth',1.5);
% xlabel('x');
% ylabel('y');
% legend('Data','GPR predictions');
% hold off
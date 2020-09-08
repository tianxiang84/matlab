rng(0,'twister'); % For reproducibility
n = 1000;
x = linspace(-10,10,n)';
y = 1 + x*5e-2 + sin(x)./x + 0.2*randn(n,1);


fileID = fopen('dev_T-6852_actual.txt','r');
%data = fscanf(fileID,'%f %f %f\n');
%fclose(fileID);
formatSpec = '%f%f%f%[^\n\r]';
delimiter = '\t';
dataArray = textscan(fileID, formatSpec, 'Delimiter', delimiter, 'TextType', 'string',  'ReturnOnError', false, 'CollectOutput',1);
data = dataArray{1,1};
x = data(:,1);
y = data(:,2);

%% Close the text file.
fclose(fileID);





gprMdl = fitrgp(x,y,'Basis','linear',...
      'FitMethod','exact','PredictMethod','exact');
ypred = resubPredict(gprMdl);

plot(x,y,'b.');
hold on;
plot(x,ypred,'r','LineWidth',1.5);
xlabel('x');
ylabel('y');
legend('Data','GPR predictions');
hold off
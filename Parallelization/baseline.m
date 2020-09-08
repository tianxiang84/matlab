% First baseline script
% Issue: no seed not repeatable
% Iusse: should be in SIMULINK environemnt

tic
n = 150;
A = 500;
a = zeros(1,n);
for i = 1:n
    a(i) = max(abs(eig(rand(A))));
end
toc
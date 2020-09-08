function status = time_par_tests_mfile(matrix_size, repeat_times)
% time_par_tests_mfile: Perform a parallization test (baseline)

M = repeat_times; %[-] how many times we repeat the operation
N = matrix_size; %[-] matrix size

seed = 42; % Specify the seed for MATLAB random number generator
rng(seed);

a = zeros(1,M); %[-] soring the results
parfor i = 1:M
    a(i) = max(abs(eig(rand(N))));
end

status = 0;

end
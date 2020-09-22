// This C function implements the following MATLAB script: create random matrix and do eigen value calculation

#include "time_par_tests.h"
#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 

int time_par_tests(int matrix_size, int repeat_times)
{
/*
    // Use current time as seed for random generator 
    srand(time(0)); 

    // create a vector 
    double a[repeat_times]; // array to hold the maximum absolute eigen value for each iteration
    double matrix[matrix_size][matrix_size];

    // Loop over repeat times
    for (int iter = 0; iter < repeat_times; iter++) {
        //  create a random matrix
        //  do eigen value caluclation
        //  do abs
        //  find max
        // record it to a vector
        for (int i=0; i<matrix_size; i++) {
            for (int j=0; j<matrix_size; j++){
                matrix[i][j] = rand()/(double)RAND_MAX;
            }
        }

        a[iter] = 0.0;
    }
    
    return (int) ( matrix[0][0] * ((double)RAND_MAX));
*/
    return 1;
}
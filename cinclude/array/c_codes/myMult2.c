#include <stdio.h>

#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif

#include "myMult2.h"

/* Return the updated value
double myMult2(double input){
	return 2.0 * input;
}
*/

/* Update the value using pass by reference
void myMult2(double *input){
	*input = 2.0 * (*input);
}
*/

/*
void update_array(double *input, int num_rows, int num_cols){
	int i, j;
	for (i=0; i<num_rows; i++){
		input[i] = 2.0;
		//for (j=0; j<num_rows; j++){
		//	input[i] = 2.0;
		//}
	}
}
*/

void update_array(double *input, int num_rows, int num_cols){
	int i, j;
	// for cell i,j, it has j columns in front of it, each column has num_rows, so j*(num_rows)+i
	for (i=0; i<num_rows; i++){
		//nput[i] = 2.0;
		for (j=0; j<num_rows; j++){
			input[j*(num_rows)+i] = (double)(i+2) * (double)(j+1);
		}
	}
}
/*
int main(){
	// Test simple output
	printf("Hello World.\n");
	
	// Update a variable using pass by reference
	//double input = 1.0;
	//printf("Before the update, value of the variable is: %f\n", input);
	
	//myMult2(&input);
	//printf("After swap, value of input : %f\n", input);
	
	double input_array[18];
	update_array(input_array,6,3);
	printf("First value: %f\nSecond value: %f\n", input_array[0], input_array[17]);
}
*/
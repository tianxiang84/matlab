#include <math.h>
#include <unistd.h>

#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif

#include <omp.h>
#include "myMult2.h"

double myMult2(double u)
{
	omp_set_num_threads( 4 );
	
	// Create an array
	int size = 10;
	//int size = 1024 / sizeof(double); // 1 KB of doubles 
	//size *= 1024; // 1 MB
	//size *= 1024; // 1 GB 
	double my_vector[size];
	
	double pi = acos(-1.0);
	
	int i;
	#pragma omp parallel for
	for (i=0; i<4; i++) {
		//double testA = 1.0;
		my_vector[i] = exp( -sin( i*i + pi*log(i+1.0) ) );
		my_vector[i] += -exp( -cos( i*i*i + pi*log10(i+10.0) ) );
		my_vector[i] -= exp( -tan( i*i*i*i + pi*log(i+99.0) ) );
		my_vector[i] += exp( -sin( i*i*i*i*i + pi*log(i+2.0) ) );
		my_vector[i] -= -exp( -cos( i*i*i*i*i*i + pi*log10(i+20.0) ) );
		my_vector[i] += exp( -tan( i*i*i*i*i*i*i + pi*log(i+199.0) ) );
		sleep(1);
	}
	
    return 2 * u + my_vector[0];
}
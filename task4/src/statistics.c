#include <statistics.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>


/*
	Calculates the mean of an array of data. 
	args:
		data:  pointer to data array, must be a valid array of doubles with at least n elements
		n: number of elements in the array
*/

double meanf(double* data, int n)
{
	if(data==NULL) return 0; 	// if the data array is NULL return 0 - this doesn't prevent invalid arrays being sent to the function but at least it catches this mistake
	if(n==0) return 0;			// If the data count is 0 return 0
	if(n==1) return *data;		// If the data count is 1 then just return the first data point

	double acc = 0;

	for(int i=0; i<n; i++)
	{
		acc += data[i];
	}

	return acc / n;
}

/*
	Calculates the standard deviation of an array of data. Optionally outputs mean as well.
	args:
		data:  pointer to data array, must be a valid array of doubles with at least n elements
		n: number of elements in the array
		meanout: a pointer to a double to hold the result of the mean calculation. Set to NULL if mean not needed.
*/

double stdevf(double* data, int n, double* meanout)
{

	if(data==NULL) return 0; 	// if the data array is NULL return 0 
	if(n==0) return 0;			// If the data count is 0 return 0
	if(n==1) return 0;			// If the data count is 0 return 0 - sample standard deviation isn't valid for a single data point

	double dmean = meanf(data,n);
	double acc = 0;
	double term;

	for(int i=0; i<n; i++)
	{
		term = data[i] - dmean;
		acc += term*term;		// This is usually faster than calling math function pow for powers of 2
	}

	if(meanout != NULL) *meanout = dmean;

	return sqrt(acc / (n-1));
}

int load_data_columns(FILE* fp, double* xdata, double* ydata, int max_n)
{
	int n = 0;
	
	while(fscanf(fp,"%lf %lf",xdata, ydata) != EOF && n < max_n)
	{

		xdata++;
		ydata++;
		n++;
	}

	/*
Alternate:
	while(!feof(fp) && n < max_n)
	{
		fscanf(fp,"%lf %lf",xdata, ydata);
		xdata++;
		ydata++;
		n++;
	}


	*/

	return n;
}
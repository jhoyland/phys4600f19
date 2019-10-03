#include <stdio.h>
#include <stdlib.h>
#include <math.h>	
#include <statistics.h>

void main(int argc, char** argv)
{
	if(argc < 2) 
	{
		printf("\nNo data file given");
		exit(1);
	}

	FILE* fp;
	int ndata = MAX_N_DATA;

	double xdata[ndata];
	double ydata[ndata];

	double mean;
	double sdev;

	fp = fopen(argv[1],"r");

	if(fp != NULL)
	{
		ndata = load_data_columns(fp,xdata,ydata,ndata);

		if(ndata)
		{
			sdev = stdevf(ydata,ndata,&mean);

			printf("\nFor data file %s\nMean of %d data items = %lf\nStandard deviation= %lf\n\n",argv[1],ndata,mean,sdev);

		}
		else
		{
			printf("data read failed");
		}
	}
	else
	{
		printf("couldn't open file");

	}


}
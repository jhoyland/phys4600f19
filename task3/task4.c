
#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE * input_file;

	float x[100];
	float y[100];

	input_file = fopen("data.dat","r");

	if(input_file != NULL)
	{
	fscanf(input_file,"%f %f",&x[i],&y[i]);

	fclose(input_file);
	}

	input_file = fopen("hello.txt","w");

	fprintf(input_file,"\n%f %f",x,y);
	fclose(input_file);
}
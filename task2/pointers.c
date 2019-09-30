#include <stdio.h>
#include <stdlib.h>

int main()
{
	int array [] = {12,14,16,18};

	int* cursor = array;
	int i;
	for(i=0;i<90;i++)
	{

		printf("\n%d",*cursor);
		cursor ++;

	} 

}
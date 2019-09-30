#include <stdio.h>
#include <stdlib.h>
#include <file2.h>

int main()
{
	int x = 2;
	int y = 4;

	int z = 0;

	z = func(x,y);

	printf("%d %d %d",x,y,z);

	return 0;
}
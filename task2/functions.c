#include <stdio.h>
#include <stdlib.h>

int divide(int a, int b, int* d)
{
	int c = a/b;
	*d = a%b;

	return c;
}

void divide_list(int* inp, int divisor, int* outp, int len)
{
	int i = 0;
	for(i=0;i<len;i++)
	{
		outp[i] = inp[i]/divisor;
	}
}

int main()
{
	int a[] = {1,2,3,5};
	int b[4];

	divide_list(a,2,b,4);
}
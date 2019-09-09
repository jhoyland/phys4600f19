#include <stdio.h>
#include <stdlib.h>

int main()
{
	/* Start of your code */

	int i;
	char c;
	short s;
	long l;
	long long ll;
	float f;
	double d;
	long double ld;

	printf("\nSize of int %lu",sizeof(i));
	printf("\nSize of char %lu",sizeof(c));
	printf("\nSize of short %lu",sizeof(s));
	printf("\nSize of long %lu",sizeof(l));
	printf("\nSize of long long %lu",sizeof(ll));
	printf("\nSize of float %lu",sizeof(f));
	printf("\nSize of double %lu",sizeof(d));
	printf("\nSize of long double %lu",sizeof(ld));
	printf("\n");

	/* End of your code */ 


	float x = 0.5;
	float y = 0.5;
	float z = 0.5;

	float a = x + y + z;

	printf("%.10f == 1.5?",a);

	if(a == 1.5) printf("True");
	else
		printf("False");

	return 0;
}
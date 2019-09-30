#include <stdio.h>
#include <stdlib.h>

int main()
{
	/* Start of your code */

	int i;
	int *j;
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


	float x = 0.3;
	float y = 0.3;
	float z = 0.3;

	float a = x + y + z;

	printf("%.10f == 0.9?",a);

	if(a == 0.9) printf("True");
	else
		printf("False");

	return 0;
}
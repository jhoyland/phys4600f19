#include <stdio.h>
#include <stdlib.h>
#include <math.h>	
#include <float.h>
#include <assert.h>

#define print_macro(_ARG) printf("\n%s = %d",#_ARG,_ARG);
#define print_macrof(_ARG) printf("\n%s = %g",#_ARG,_ARG);


void main(int argc, char** argv)
{
	printf("Size of floating point %ld",sizeof(float));

	assert(1==2);

	print_macro(FLT_RADIX);
	print_macro(FLT_MANT_DIG);	
	print_macro(FLT_DIG);
	print_macro(FLT_MIN_EXP);	
	print_macro(FLT_MIN_10_EXP);	
	print_macro(FLT_MAX_EXP);	
	print_macro(FLT_MAX_10_EXP);	
	print_macrof(FLT_MAX);	
	print_macrof(FLT_EPSILON);	
	print_macrof(FLT_MIN);	
	print_macro(FLT_ROUNDS);	
	print_macro(FLT_EVAL_METHOD);	
	print_macro(DECIMAL_DIG);		

}
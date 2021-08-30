#include<stdio.h>
#define TEHS 1.5F // Three halfs
float fisqrt(float num)
{

	long i;
	float x2, y;

	
	x2 = num *  0.5F;
	y  = num;
	
	i = * ( long * ) &y;
	i = 0x5f3759df - ( i>>1 );

	y = * ( float * ) &i;
	
	y = y * (TEHS - (x2 * y * y) );
	y = y * (TEHS - (x2 * y * y) );
	
	return y;
}
int main()
{	
	int number = 128; 
	float result = fisqrt(number);
	printf("Result is %G",result);
	
	return 0;
	
}

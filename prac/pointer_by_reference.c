#include <stdio.h>
#include <stdlib.h>

void square(int *x)
{
	*x = (*x )* (*x);
}

int main()
{
	int num =9;

	square(&num);
	printf("The squareof given number is %d\n", num );
	
	return 0;
}
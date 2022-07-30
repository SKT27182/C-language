#include <stdio.h>

int arraySum(int *array,const int n)
{
	int sum =0;
	int * const arrayEnd = array +n;

	for ( ; array < arrayEnd; ++array)
	{
		sum +=*array;
	}

	return sum;
}



void main()
{
	
	int values[10] = {3,7,-9,3,6,-1,7,9,1,-5};

	printf("The Sum is %d\n",arraySum(values,10) );


	//return 0;
}
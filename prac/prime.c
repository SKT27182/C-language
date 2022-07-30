#include <stdio.h>
#include <stdlib.h>

int main()
{
	printf("Enter the number upto which you want to find the prime numbers: \n");
    int n=0,index=1;
	scanf("%d",&n);
	int prime[] = {0};
	prime[0]=1;
	prime[1]=2;
	for (int i = 3; i <= n; i=i+2)
	{
		if (i % prime[index] !=0)
		{
			index=index+1;
			prime[index]=i;
		}
	}
	for (int i = 0; i <= index; ++i)
	{
		printf("%d ", prime[i] );
	}
	printf("\n");

	return 0;
}
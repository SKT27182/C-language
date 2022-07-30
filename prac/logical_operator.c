#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>


int and(unsigned int a, unsigned int b){

	int c= a & b;
	return c;
}

int or(unsigned int a, unsigned int b){

	unsigned int c= a | b;
	return c;
}

int main()
{
	unsigned int a,b;
//	int a1,b1,c1;
        int c=0;
	char o[3];

	printf("Enter the Logical_operator to be performed: ");
	scanf("%s",o);
	if ((strcmp(o,"OR")) !=0 && (strcmp(o,"AND")) !=0 )
	{
		printf("Invalid Logical_operator\n"); 
		_Exit(0);
	}
	printf("Enter the first Binary_Diigt: ");
	scanf("%d",&a);
	//a=a1;
	printf("Enter the second Binary_Diigt: ");
	scanf("%d",&b);
	//b=b1;

    if((strcmp(o,"OR"))==0){
    	c= or(a,b);
    	//c1=c;
    	printf("Binary operation '%s' between %d and %d is: %d\n",o,a,b,c );
    }else if((strcmp(o,"AND"))==0){
    	c= and(a,b);
    	//c1=c;
    	printf("Binary operation '%s' between %d and %d is: %d\n",o,a,b,c );

    }
  
	return 0;
}

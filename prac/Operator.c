#include<stdio.h>


double add(double a,double b)
{

	double c=a+b;
	return c;

}

double subtract(double a,double b)
{

	double c=a-b;
	return c;

}

double multiply(double a,double b)
{

	double c=a*b;
	return c;

}

double divide(double a,double b)
{

	double c=a/b;
	return c;

}

/*double reminder(double a,double b)
{

	double c= a % b;
	return c;

}*/



double main()
{
	char o;
	double a=0,b=0,c=0;
	printf("Enter the operator to be used: \n");
	scanf("%c",&o);
	printf("Enter the first value: \n");
	scanf("%le",&a);
	printf("Enter the second value: \n");
	scanf("%le",&b);

	if(o=='+'){
		c=add(a,b);
	}
	if(o=='-'){
		c=subtract(a,b);
	}
	if(o=='*'){
		c=multiply(a,b);
	}
	if(o=='/'){
		c=divide(a,b);
	}


	printf("c is %.2le\n",c );
    

	return 0;
}
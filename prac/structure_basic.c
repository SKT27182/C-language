#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct employee
{
	char name[10];
	char hireDate[15];
	float salary;
	
};

int main()
{
	struct employee emp= {"Jonson","12/02/2020",20399.00f};
	/*emp.name = "Jonson";
	emp.hireDate= 2;
	emp.salary= 2000.00f;*/

    printf("employee's name: %s, hireDate: %s, salary: %.2f\n",emp.name,emp.hireDate,emp.salary );


    printf("Enter employee Name: ");
	scanf("%s",emp.name);
	printf("\nEnter employee hireDate: ");
	scanf("%s",emp.hireDate);
	printf("\nEnter employee salary: ");
	scanf("%f",&emp.salary);

	printf("employee's name: %s, hireDate: %s, salary: %.2f\n",emp.name,emp.hireDate,emp.salary );


	

	return 0;
}
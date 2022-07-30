#include <stdio.h>
#include <string.h>

int main()
{
	char name[] = "My name is SKT";
	char name2[] = " I am fine.";
	char temp[50];


//copy a string
	strncpy(temp, name, sizeof(temp)-1);


//length of a styring
	printf("The length is %ld\n",strlen(name) );


	printf("The String temp is: %s\n", temp);


//concating a string
	strncat(name, name2,25);
	printf("FInal String is: %s\n",name);
	printf("%ld\n",strlen(name) );




	return 0;
}
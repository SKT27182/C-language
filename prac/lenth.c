#include <stdio.h>
#include <string.h>
#include <stdbool.h>


int len(char str1[20])
{
	int count=0;
	for (int i = 0; str1[i] != '\0' ; ++i)
	{
		++count;
	}
	return count;

}

void concat(char result[], char string1[], char string2[])
{
	int i,j;

	for (int i = 0; string1[i] != '\0' ; ++i)
	{
		result[i]=string1[i];
	}

	for (int j = 0;  string2[j] != '\0' ; ++j)
	{
		result[i+j]= string2[j];
	}
}

bool compare(char string1[], char string2[])
{
	int  i=0;
	bool isEqual = false;

	while( string1[i] == string2[i] && string1[i] != '\0' && string2[i] != '\0')
	{
		++i;
	}

	if (string1[i] == '\0' && string2[i] == '\0')
	{
		isEqual = true;

	}
	else
		isEqual=false;

	return isEqual;


}


int main()
{
	char string1[20],string2[20],result[40]= "";
	printf("Enter the string1: ");
	scanf("%s",string1);
	printf("Enter the string2: ");
	scanf("%s",string2);



	int length= len(string1);
	printf("length of string1 is:  %d\n",length );

	concat(result,string1,string2);

	printf("%s\n",result );



	printf("%d", compare(string1,string2));


	return 0;
}
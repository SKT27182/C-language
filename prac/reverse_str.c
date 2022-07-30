#include <stdio.h>
#include <string.h>

int main()
{
	char str[9];
	
	printf("Enter the String: ");
	scanf("%s",str);
	

	char *p = &str[strlen(str) -1];
	

	

	printf("Reversed String is: \n");

	for (; *p; --p)
	{

		printf("%c ", *p);

	}
	printf("\n");

	

	return 0;
}
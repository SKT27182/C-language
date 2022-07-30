#include <stdio.h>
#include <string.h>




int length(const char *len_pointer)
{
	const char *last = len_pointer;
	while(*last)
	{
		++last;
	}
	
	return last - len_pointer;
}

int main()
{
	char str[20];
	printf("Enter the string: \n");
	scanf("%s",str);

	printf("Length of the string is %d\n",length(str));
    	


	return 0;
}
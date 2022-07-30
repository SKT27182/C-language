#include <stdio.h>
#include <stdlib.h>

#define FILENAME "hi.txt"

int main()
{
	FILE *fp = NULL;
	char ch;
	int linecount = 0;

	fp = fopen(FILENAME, "r");

	if (fp == NULL)
	{
		perror("Error in opening file");
		return(-1);
	}

	while((ch=fgetc(fp)) != EOF)
	{

        if(ch=='\n')
        	linecount++;

	}

	printf("Total Number of Lines are %d\n",linecount );

	fclose(fp);
	fp = NULL;


	return 0;
}
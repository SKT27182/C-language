#include <stdio.h>
#include <stdlib.h>


#define FILENAME "hi.txt"

int main()
{
	
    FILE *fp=NULL;

    int cnt=0;
    int i=0;

    fp = fopen(FILENAME,"r");

    if (fp == NULL)
	{
		return(-1);
	}

	//move the file pointer to the end

	fseek(fp,0,SEEK_END);


	//get the position of file pointer

	cnt = ftell(fp);

	while(i<cnt)
	{
		i++;
		fseek(fp,-i,SEEK_END);
		printf("%c",fgetc(fp) );
	}

	printf("\n");
	fclose(fp);
	fp=NULL;




   

	return 0;
}
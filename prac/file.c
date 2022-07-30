#include <stdio.h>
#include <stdlib.h>

int main()
{
	//rename the file
	//rename(oldname,newname);


	//remove the file
	//remove(filename);

    



    //read a string from  afile
    
    /*FILE *fp;
    char str [8];

    fp= fopen("hi.txt","r");

    if( fgets(str,8,fp) != NULL)
    {
    	printf("%s\n", str);
    }*/





	FILE *fp;
	int c;

	char fileName[20];
	printf("Enter the file name to be read: ");
	scanf("%s",fileName);

	

	fp = fopen(fileName,"r");

	if (fp == NULL)
	{
		perror("Error in opening file");
		return(-1);
	}


    while((c = fgetc(fp)) != EOF)
    	printf("%c",c );

    
    fclose(fp);
    fp = NULL;


    system("pause");


    //getchar();
	return(0);
}
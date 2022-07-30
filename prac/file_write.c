#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *fp;

    char fileName[20];
	printf("Enter the file name to be write: ");
	scanf("%s",fileName);

	

	fp = fopen(fileName,"w+");

	char write[20];
	printf("Write the string to be added on file: ");
	scanf("%s",write);


	//writes the string to the file but not the EOF so we should write the explicitely

	fputs("this is skt\n",fp);
	fputs("I am happ\n",fp);

	//writes the string without spaces
	fputs(write,fp);

	fputc('\0',fp);

    
    

    
	/*int ch;

	char fileName[20];
	printf("Enter the file name to be write: ");
	scanf("%s",fileName);

	

	fp = fopen(fileName,"w+");
    


    //writes the ch in ASCII value one by one

	for(ch = 33; ch<=100;ch++){
		fputc(ch,fp);
	}*/


	fclose(fp);
	fp= NULL;


	return 0;
}
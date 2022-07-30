#include<stdio.h>
#include<ctype.h>
#include <string.h>

int main()
{
    char s,l;
    printf("Enter the character: ");
   

    while((s=getchar()) != '\n')
    {
        l = tolower(s);
        printf("%c",l);
    }
    printf("\n");


    char m[33]="hello how are you";
    //scanf("%s",m);

    for(int i=0; (m[i]=(char)toupper(m[i])) != '\0'; ++i  )
        ;

        
    printf("%s\n",m );
          

  


}

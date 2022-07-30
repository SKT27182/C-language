#include<stdio.h>

int main()
{
    int c, i=0;
    printf("Enter a Line: ");
    c= getchar();
    while(c != '\n'){
        putchar(c); 
        printf("\n");
        c = getchar();
    }
}

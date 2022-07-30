#include<stdio.h>
#include<string.h>

int main()
{
    char a[100];
    int i=0;
    printf("Enter the string: \n");
    scanf("%c", a);
//    gets(a);
    while (a[i] != '\n')
        i=i+1;
    printf("Length = %d\n",i);
    return 0;
}

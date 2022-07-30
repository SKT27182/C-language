#include<stdio.h>
#include<stdlib.h>


int main()
{

    enum company {Google, Xerox};
    enum company x= Google,y=Xerox;
    printf("Value of x is  %d\nand y is %d\n",x,y);
    return 0;

}


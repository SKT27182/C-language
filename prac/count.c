#include<stdio.h>

int main()
{

    long nc=0,nw=0,nl=0;
    int c,i=0;
    c=getchar();


    while (  c != '\n') 
    {
        nc= nc+1;


        if(c == ' ' || c== '\n' || c== '\t')
        {
            nw=nw+1;
        }

        c=getchar();
    }

        printf("characters=%ld\nwords=%ld\n", nc,nw+1);

}

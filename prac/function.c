#include<stdio.h>

int power(int base, int n)
{
    int i,p=1;
    for(i=0;i<n;i=i+1)
        p= p*base;
    return p;
}

int main()
{
    int n;
    int base;
    printf("Enter the base & power ");
    scanf("%d\t%d",&base, &n); 
    int ans= power(base,n);
    printf("%d",ans);
}

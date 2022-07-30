#include<stdio.h>
#include<limits.h>
#include<float.h>
#include <string.h>

int main()
{
    char c[5];
//    stdin i="int";
    printf("Enter the data_type: ");
    scanf("%s",c);
    //c=getchar();
    if((strcmp(c,"char")) ==0){
        printf("%s min=%i\n",c,CHAR_MIN);
        printf("%s min=%i\n",c,CHAR_MAX);
        printf("Variable of type %s occupy %lu Bytes\n", c,sizeof(char));
    }
    if((strcmp(c,"int")) ==0){
        printf("%s min=%i\n",c,INT_MIN);
        printf("%s min=%i\n",c,INT_MAX);
        printf("Variable of type %s occupy %lu Bytes\n", c,sizeof(int));
    }
    if((strcmp(c,"float")) ==0){
        printf("%s min=%e\n",c,FLT_MIN);
        printf("%s min=%e\n",c,FLT_MAX);
        printf("Variable of type %s occupy %lu Bytes\n", c,sizeof(float));
    }
    if((strcmp(c,"double")) ==0){
        printf("%s min=%e\n",c,DBL_MIN);
        printf("%s min=%e\n",c,DBL_MAX);
        printf("Variable of type %s occupy %lu Bytes\n", c,sizeof(double));
    }
    if((strcmp(c,"short")) ==0){
        printf("%s min=%d\n",c,SHRT_MIN);
        printf("%s min=%d\n",c,SHRT_MAX);
        printf("Variable of type %s occupy %lu Bytes\n", c,sizeof(short));
    }
    if((strcmp(c,"long")) ==0){
        printf("%s min=%ld\n",c,LONG_MIN);
        printf("%s min=%ld\n",c,LONG_MAX);
        printf("Variable of type %s occupy %lu Bytes\n", c,sizeof(long));
    }
}

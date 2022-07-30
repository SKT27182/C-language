#include<stdio.h>

int main()
{
    int fahr, lower, upper;
    printf("Enter the lower limit of temp. Of fehrenheit: ");
    scanf("%d", &lower);  // scanf reads the input and here %f is used for the integer input
    printf("Enter the upper limit of temp. Of fehrenheit: ");
    scanf("%d", &upper);
    for(fahr=upper; fahr >= lower; fahr -= 20)
        printf("%3d %6.1f\n",fahr, (5.0/9.0)*(fahr-32));
}

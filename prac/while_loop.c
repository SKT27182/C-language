#include<stdio.h>

float main()
{
    float fahr, celsius;
    float lower, upper, step;
    printf("Enter the lower limit of temp. Of fehrenheit: ");
    scanf("%f", &lower);  // scanf reads the input and here %f is used for the integer input
    printf("Enter the upper limit of temp. Of fehrenheit: ");
    scanf("%f", &upper);
/*    lower =0; // lower limit of temperature
    upper = 300; //upper limit of temperature  */
    step =20;
    printf("fahr\tcelcius\n");
    fahr=lower;
    while (fahr <= upper) {
        celsius = 5.0 * (fahr-32) / 9.0;
        printf("%3.0f\t%6.1f\n", fahr, celsius);
        fahr = fahr +step;
    }

    return 0;
}

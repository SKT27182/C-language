#include<stdio.h>

double main()
{

    double w,h,p,a;
    printf("Enter the Width of the Rectangle: ");
    scanf("%le",&w);
    printf("Enter the height of the Rectangle: "); 
    scanf("%le",&h);
    p = (w+h)*2;
    a= w*h;
    printf("Area of the Rectangle is %.2le.\nand Perimeter is %.2le\n",a,p);
    return 0;

}

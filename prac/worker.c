#include <stdio.h>
#include <stdlib.h>

#define RATE    12.00
#define TAX_300 .15
#define TAX_150 .20
#define TAX_450 .25
int main(int argc, char const *argv[])
{
	double hours=0.00,overtime=0.00;
	//uble TAX_300 =15,TAX_150 =20,TAX_450 =25;
	double gross_pay=0.00,tax=0.00,net_pay=0.00;

	printf("Enter the no. od hours worked: ");
	scanf("%le",&hours);

	if(hours<=40)
	{
		gross_pay= hours * RATE;
		if(gross_pay<=300)
		{
			tax = (gross_pay * TAX_300);
			net_pay = gross_pay - tax;
		} 
		else if(gross_pay>300 && gross_pay <= 450)
		{
		    tax = (TAX_300*300) + (TAX_150 *(gross_pay-300)); 
		    net_pay= gross_pay - tax ;
		} 
		else
	    {
		    tax = (TAX_300*300) + (TAX_150 *150) + (TAX_450 *(gross_pay-450));
		    net_pay= gross_pay- tax ;
		}
	}
	else
	{	

		gross_pay= 40 * RATE;
		overtime= (hours-40)*1.5;
		gross_pay = gross_pay + overtime * RATE;
		if(gross_pay<=300)
		{
			tax = (gross_pay * TAX_300);
			net_pay = gross_pay - tax;
		} 
		else if(gross_pay>300 && gross_pay <= 450)
		{
		    tax = (TAX_300*300) + (TAX_150 *(gross_pay-300)); 
		    net_pay= gross_pay - tax ;
		} 
		else
	    {
		    tax = (TAX_300*300) + (TAX_150 *150) + (TAX_450 *(gross_pay-450));
		    net_pay= gross_pay- tax ;
		}
			                 
    }                            
		                 
	                 
    printf("Your Gross_pay of this week is: %.2f\nYour taxes this week is: %.2f\nYour net_pay this week is: %.2f\n",gross_pay,tax,net_pay);


	

	return 0;
}
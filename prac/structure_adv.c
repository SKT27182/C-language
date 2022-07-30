#include <stdio.h>
#include <stdlib.h>


struct item
{
	char *itemName;
	int quantity;
	float price;
	float amount;
};

void readitem(struct item *i)
{
	printf("Enter Product name: ");
	scanf("%s", i->itemName);

	printf("\nEnter price: ");
	scanf("%f", &i->price);

	printf("Enetr quantity: ");
	scanf("%d", &i->quantity);

	i->amount = (float) (i->quantity) * (i->price);

}

void printItem(struct item *i)
{
	printf("\nName: %s\nPrice: %.2f\nQuantity: %d\nTotal: %.2f",i->itemName,i->price,i->quantity,i->amount);

}






int main()
{
	struct item itm;
	struct item *pitem;

	pitem = &itm;

	pitem->itemName = (char *) malloc(30 * sizeof(char));

	if (pitem ==NULL)
	{
		exit(-1);
	}

	readitem(pitem);

	printItem(pitem);
    
    free(pitem->itemName);



	
	return 0;
}
#include <stdio.h>

int main(int argc, char const *argv[])
{
	int count =10,x=0;
	void *int_pointer=NULL;
	//int *cont_pointer=NULL;

	//address of the pointer itself after initializaation
	printf("int_pointer's Address= %p\n", int_pointer);



	int_pointer = &count;

	//making the value of a pointer to be a constant and secont const fixes the adress the pointer is pointing
	const int *const cont_pointer = &x;


	//value of count through pointer
	x = *(int*)int_pointer;


	//addres of the pointer can't be changed
	//cont_pointer=&count;

	//*cont_pointer=11;
	//above can't be executed because cont_pointer value is constant

	printf("Count = %d,\nx=%d\n",count,x );

	//address of count without the use of pointer
	printf("Address of count without pointer= %p\n", &count);

	//address of count or the address to which pointer is refering
	printf("int_pointer's value= %p\n", int_pointer);

	//address of the pointer itself
	printf("int_pointer's Address= %p\n", &int_pointer);

	//Value to which pointer is referring
	printf("int_pointer value refer to= %d\n", *(int*)int_pointer);

	//size of pointer
	printf("Size of int_pointer= %ld bytes\n", sizeof(int_pointer));

	return 0;
}
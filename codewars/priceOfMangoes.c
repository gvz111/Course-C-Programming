/// Calculate total cost of mangoes. Every third mango is free.

#include<stdio.h>
#include<stdlib.h>

unsigned mango(unsigned quantity,unsigned price)
{
	unsigned cost=0;

	for(int i=1; i<=quantity; i++)
	{
		if(i%3 != 0)
			cost+=price;
		
	}

	return cost;
}

int main(void)
{
	printf("%u\n",mango(9,5));
}

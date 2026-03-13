/// swap по указателю

#include <stdio.h>

void swap(int * *x,int * *y)
	{
		int * temp=*x;
		*x=*y;
		*y=temp;
	}

void main()
{
	int x=1, y=2;

	int * p1=&x;
	int * p2=&y;

	swap(&p1,&p2);
	printf("x=%d, y=%d\n",*p1,*p2);
}

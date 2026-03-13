#include<stdio.h>

void swap(int *x,int *y)
{
    int *temp=x;
	x=y;
	y=temp;
}

void main()
{
	int x=1;
	int y=2;

	swap(&x,&y);
	printf("x=%d, y=%d \n",x,y);
}

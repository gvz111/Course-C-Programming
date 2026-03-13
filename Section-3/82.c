#include<stdio.h>
#include<stdlib.h>



void main()
{
	int x=1;
	int y=2;

	int * p=&x;
	int * q=&y;

	printf("%p %d %p %d",p,*p,q,*q);
	printf("\n");
}

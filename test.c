#include<stdio.h>
#include<stdlib.h>

struct Point {
	double x,y;
};

int equal(struct Point * p1,struct Point * p2)
{
	if(p1->x==p2->x && p1->y==p2->y)
		return 1;
	return 0;
}

void main()
{
	struct Point p1={10,20};
	struct Point * p2=&p1;
	struct Point * p3=p2;
	printf( "%d\n",equal(p3,p2) );
}

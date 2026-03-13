#include<stdio.h>
#include<stdlib.h>
#include "point.h"

int main()
{	/*
	point a;
	point b;
	a.name='A';
	b.name='B';
	a.x=1.1;
	a.y=2.2;
	b.x=3.1;
	b.y=3.2;
	showPoint(a);
	showPoint(b);
	printf("%lf\n",dist(a,b));
	printf("%d\n",eq(a,b));
	*/
	point a={'A',1,2};
	point b={'B',1.2,2.3};
	showPoint(a);
	showPoint(b);
	
	return 0;
}

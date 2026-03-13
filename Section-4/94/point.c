#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include "point.h"

void showPoint(point a)
{
	printf("%c(%.1lf, %.1lf)\n",a.name, a.x, a.y);
}

double dist(point a,point b)
{
	return sqrt(pow((a.x-b.x),2)+pow((a.y-b.y),2));
}

int eq(point a,point b)
{
	return dist(a,b)<0.000001;
}

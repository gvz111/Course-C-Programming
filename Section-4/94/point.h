#ifndef POINT_H
#define POINT_H

typedef struct {
	char name;
	double x,y;
}point;

void showPoint(point a);

double dist(point a,point b);

int eq(point a,point b);

#endif

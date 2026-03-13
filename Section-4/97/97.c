#include <stdio.h>
#include <math.h>

typedef struct {
	char name;
	int x,y;
}Point;

void fillPoint(Point* p)
{
	scanf(" %c %d %d",&p->name,&p->x,&p->y);
}
void fillPoints(Point arr[],int n)
{
	for(int i=0;i<n;i++)
		fillPoint(&arr[i]);
}
void showPoint(Point p)
{
	printf("%c(%d; %d)\n",p.name,p.x,p.y);
}
void printPoints(Point arr[],int n)
{
	for(int i=0;i<n;i++)
		showPoint(arr[i]);
}
double dist(Point p1,Point p2)
{
	return sqrt(pow((p1.x-p2.x),2)+pow((p1.y-p2.y),2));
}
void farthestDist(Point arr[],int n)
{
	Point p1=arr[0];
	Point p2=arr[1];
	double farthest=dist(p1,p2);

	for(int i=0; i<n; i++)
		for(int j=0; j<n && j!=i; j++)
		{
			double d=dist(arr[i],arr[j]);

			if( d > farthest )
			{
				p1=arr[i];
				p2=arr[j];
				farthest=d;
			}
		}
	printf("Fartest pair:\n");
	showPoint(p1);
	showPoint(p2);
	printf("Distance: %.1lf\n",farthest);
}

void main()
{
	Point arr[9];
	int n=0;

	printf("Type n: ");
	scanf("%d",&n);

	fillPoints(arr,n);
	printPoints(arr,n);

	farthestDist(arr,n);
}

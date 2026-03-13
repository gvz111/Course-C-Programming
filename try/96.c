#include <stdio.h>

typedef struct {
	char name;
	int x,y;
}Point;

void printPoint(Point p)
{
	printf(" %c(%d ; %d)\n",p.name,p.x,p.y);
}

void printArray(Point arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		printPoint(arr[i]);
	}
}

void fillPoint(Point* p)
{
	scanf(" %c %d %d",&p->name, &p->x, &p->y);
}

void fillPoints(Point arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		fillPoint(&arr[i]);
	}
}

int main(void)
{
	Point arr[10];
	int n=0;

	printf("Type n: ");
	scanf("%d",&n);

	fillPoints(arr,n);
	printArray(arr,n);
}

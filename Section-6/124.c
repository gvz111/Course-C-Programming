#include <stdio.h>
#include <stdlib.h>

int * foo(int n)
{
	int * p=(int *)malloc(n * sizeof(int));
	return p;
}

void main()
{
	int n=0;
	printf("Numbers of array: ");
	scanf("%d",&n);

	int * p=foo(n);
	int * q=p;

	while(p-q <n)
	{
		printf("element: ");
		scanf("%d",p++);
	}
	p--;
	while(p >= q)
	{
		printf("%d ",*p--);
	}
	printf("\n");
	free(q);
}

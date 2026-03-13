#include<stdio.h>
#include<stdlib.h>

int* CrtArr(int n)
{
	return malloc(n*sizeof(int));
}

void fillArr(int* arr,int n)
{
	for(int i=0; i<n; i++)
		scanf("%d",arr++);
}
void printArr(int* arr,int n)
{
	for(int i=0; i<n; i++)
		printf("%d ",*arr++);
	printf("\n");
}

int main(void)
{
	int n=5;
	int* x=CrtArr(n);

	fillArr(x,n);
	printArr(x,n);
}

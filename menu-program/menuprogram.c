#include <stdio.h>
#include <stdlib.h>
#include "menuprogram.h"

int counter=0;

void addNumber(int arr[])
{
	int num=0;
	printf("Number to add: ");
	scanf("%d",&num);
	arr[counter]=num;
	counter++;
}

void printArray(int arr[])
{
	printf("[ ");
	for(int i=0;i<counter;i++)
		printf("%d ",arr[i]);
	printf("]\n");
}

int findNumber(int arr[],int item)
{
	for(int i=0;i<counter;i++)
		if(arr[i]==item)
			return i;
	return -1;
}

void removeNumber(int arr[])
{
	int item=0;
	printf("Which number remove: ");
	scanf("%d",&item);
	int index=findNumber(arr,item);
	counter--;
	for(int i=index;i<counter;i++)
		arr[i]=arr[i+1];
	printf("Removed\n");
}

void swap(int arr[],int i,int j)
{
	int item=arr[i];
	arr[i]=arr[j];
	arr[j]=item;
}

void copyArray(int source[],int dest[])
{
	for(int i=0;i<counter;i++)
		dest[i]=source[i];
}

void printSorted(int arr[])
{
	int copy[counter]; ///VAL
	copyArray(arr,copy);
	for(int i=0;i<counter;i++)
		for(int j=i+1;j<counter;j++)
			if(copy[i]>arr[j])
				swap(copy,i,j);
	printArray(copy);
}

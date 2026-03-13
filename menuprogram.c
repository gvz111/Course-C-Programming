#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"menuprogram.h"

int counter=0;

void addNumber(int arr[],int num)
{
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

void removeNumber(int arr[],int rem)
{
	int index=findNumber(arr,rem);
	if(index==-1)
		printf("Noting founded.\n");
	else{
		counter--;
		for(int i=index;i<counter;i++)
			arr[i]=arr[i+1];
	}
}

void swap(int arr[],int i,int j)
{
	int temp=arr[i];
	arr[i]=arr[j];
	arr[j]=temp;
}

void copyArray(int source[],int dest[])
{
	for(int i=0;i<counter;i++)
		dest[i]=source[i];
}

void printSorted(int arr[])
{
	int copy[counter];
	copyArray(arr,copy);
	for(int i=0;i<counter;i++)
		for(int j=i+1;j<counter;j++)
			if(arr[j]<copy[i])
				swap(copy,i,j);
	printArray(copy);
}


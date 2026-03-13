#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct {
		char name[10];
		double age;
	}person;

void fillArray(person arr[],int size)
{
	for(int i=0;i<size;i++)
	{
		printf("Enter %d name: ",i+1);
		scanf("%s",arr[i].name);
		printf("Enter %d age: ",i+1);
		scanf("%lf",&arr[i].age);
	}
}

void printArray(person arr[],int size)
{
	for(int i=0;i<size;i++)
		printf("%s %lf\n",arr[i].name,arr[i].age);
}

void main()
{
	person people[3];
	int size=sizeof(people)/sizeof(people[0]);

	fillArray(people,size);
	printArray(people,size);
}

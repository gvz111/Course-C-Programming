#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main()
{
	typedef struct {
		char name[10];
		double age;
	}person;

	person people[3];

	int size=sizeof(people)/sizeof(people[0]);

	for(int i=0;i<size;i++)
	{
		printf("Enter %d name: ",i+1);
		scanf("%s",&people[i].name);
		printf("Enter %d age: ",i+1);
		scanf("%lf",&people[i].age);
	}

	for(int i=0;i<size;i++)
	{
		printf("%s %lf\n",people[i].name,people[i].age);
	}
}

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct{
	int id;
	char name[15];
	char category;
	double salary;
	double tax;
}employee;

void fillEmployee(employee* e)
{
	printf("Type id, name, salary: ");
	scanf("%d %s %lf",&e->id,e->name,&e->salary);

	do
	{
		printf("Enter category: ");
		scanf(" %c",&e->category);
	}
	while(e->category!='A' || e->category!='B' || e->category!='C');

	if(e->category=='A')
		e->tax= 0.1*e->salary;
	else if(e->category=='B')
		e->tax= 0.15*e->salary;
	else
		e->tax= 0.2*e->salary;
}

int main()
{
	return 0;
}

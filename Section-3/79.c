#include<stdio.h>
#include<stdlib.h>

typedef struct {
	char name[10];
	double age;
}person;

void makePerson(person * p)
{
	printf("Person name: ");
	scanf("%9s",(*p).name);
	printf("Person age: ");
	scanf("%lf",&(*p).age);
}

void printPerson(person p)
{
	printf("\n%s is %.1lf years old.\n",p.name,p.age);
}

void main()
{
	person p1;
	makePerson(&p1);
	printPerson(p1);
}

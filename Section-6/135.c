#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct{
	unsigned age;
	char* name;
}person;

person* crtPerson(char* name,unsigned age)
{
	person* p= malloc(sizeof(person));

	p->name = malloc(strlen(name)+1);

	strcpy(p->name,name);
	p->age = age;

	return p;
}

void printPerson(person* p)
{
	printf("%s	%u\n",p->name,p->age);
}

int main(void)
{
	person* p1 = crtPerson("Alice",19);
	printPerson(p1);
	person* p2 = crtPerson("Alfred",34);
	printPerson(p2);
	person* h = crtPerson("Simon", 41);
	printPerson(h);
}

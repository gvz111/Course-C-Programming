#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main()
{
	typedef struct Person {
		char name[10];
		double age;
	}person;

	person p1;
	p1.age=20;
	strcpy(p1.name,"This str");
	printf("%.2lf\n",p1.age);
	puts(p1.name);
}

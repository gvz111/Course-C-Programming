#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main()
{
	typedef struct {
		char name[10];
		double age;
	}person;

	person p1={.age=20,.name="Alibaba"};

	printf("%lf\n%s\n",p1.age,p1.name);
}

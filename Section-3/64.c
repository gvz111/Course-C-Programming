#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main()
{
	struct Person {
		char name[10];
		double age;
	};

	struct Person p1;

	strcpy(p1.name,"This str");

	for(int i=0;p1.name[i]!='\0';i++)
		printf("%c",p1.name[i]);
	printf("\n");

}

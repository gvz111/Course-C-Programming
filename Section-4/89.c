#include<stdio.h>
#include<stdlib.h>

typedef struct {
	char name[10];
	int id;
	double grade[2];
}student;

void fillStudent(student *s1)
{
	scanf("%s %d %lf %lf",(*s1).name, &s1->id, &s1->grade[0], &(*s1).grade[1]);
}

void main()
{
	student s1={};
	fillStudent(&s1);
	printf("%s %d %.2lf %.2lf",s1.name, s1.id, s1.grade[0], s1.grade[1]);
	printf("\n");
}

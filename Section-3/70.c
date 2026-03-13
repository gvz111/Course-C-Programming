#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct {
	char name[10];
	double grade;
}course;

typedef struct {
	char name[10];
	double age;
	course study[2];
}student;

void main()
{
	student s1[2];
				/// INPUT
	for(int i=0;i<2;i++)
	{
		printf("Student %d name: ",i+1);
		scanf("%s",s1[i].name);
		printf("Student %d age: ",i+1);
		scanf("%lf",&s1[i].age);

		for(int j=0;j<2;j++)
		{
			printf("%d study: ",j+1);
			scanf("%s",s1[i].study[j].name);
			printf("%d grade: ",j+1);
			scanf("%lf",&s1[i].study[j].grade);
		}
	}
				/// OUTPUT
	int studentsize=sizeof(s1)/sizeof(s1[0]);
	int studysize=sizeof(s1[0].study)/sizeof(s1[0].study[0]);

	for(int i=0;i<studentsize;i++)
	{
		printf("\nName: %s, age: %.2lf\n",s1[i].name,s1[i].age);

		for(int j=0;j<studysize;j++)
		{
			printf("Study: %s, grade: %.1lf\n",s1[i].study[j].name,s1[i].study[j].grade);
		}
	}

}

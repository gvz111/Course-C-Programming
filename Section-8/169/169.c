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
///169
void saveEmployee(char* path)
{
	printf("Insert number of employees: ");
	int n=0;
	scanf("%d",&n);

	FILE* f= fopen(path,"ab+");

	employee e;
	for(int i=1;i<=n;i++)
	{
		printf("Fill employee below:/n");
		fillEmployee(&e);
		fwrite(&e,sizeof(employee),1,f);
	}

	fclose(f);
}
///169
int main()
{
	return 0;
}





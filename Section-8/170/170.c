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
///170
int catNumber(char* path,char c,int totalEmp)
{
	employee employees[totalEmp];
	FILE* f= fopen(path,"rb");
	fread(employees,sizeof(employee),totalEmp,f);
	fclose(f);

	int count=0;
	for(int i=0; i< totalEmp; i++)
		if(employees[i].category == c)
			count++;
	return count;
}
///170
int main()
{
	return 0;
}

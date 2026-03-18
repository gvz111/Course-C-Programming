#include<stdio.h>
#include<string.h>

typedef struct{
	char name[11];
	int age;
}person;
/*
int main(void)
{
	person p;

	strcpy(p.name,"name1");
	p.age= 22;

	FILE* f= fopen("file.txt","w+");
	fprintf(f,"%s %d",p.name,p.age);

	char name[9]={};
	int age;

	rewind(f);
	fscanf(f,"%s %d",name,&age);
	printf("%s %d\n",name,age);
}
*/
void printPerson(person p)
{
	printf("%s %d\n",p.name,p.age);
}

int main(void)
{
	person p;

	strcpy(p.name,"name2");
	p.age= 22;

	FILE* f= fopen("file.bin","ab+");
	fwrite(&p,sizeof(p),1,f);

	rewind(f);

	person persons[2];
	fread(persons,sizeof(p),2,f);

	printPerson(persons[0]);
	printPerson(persons[1]);

}

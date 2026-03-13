#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void addCurr(char* path,char* curr1,char* curr2);
void printCurr(char* path)
{
	FILE* f=fopen(path,"r");
	if(!f){
		printf("File not exist\n");
		return;
	}

	char* curr1=NULL;
	char* curr2=NULL;
	double rate;

	while( fscanf(f,"%ms %ms %lf",&curr1,&curr2,&rate)==3 )
	{
		printf("%s %s\n",curr1,curr2);
		free(curr1);
		free(curr2);
	}
	fclose(f);
}
void convert(char* path,char* curr1,char* curr2)
{
	FILE* f=fopen(path,"r");
	if(!f){
		printf("File not exist\n");
		return;
	}
	char* temp1=NULL;
	char* temp2=NULL;
	double rate;

	while( fscanf(f,"%ms %ms %lf",&temp1,&temp2,&rate)==3 )
	{
		if( !strcmp(temp1,curr1) && !strcmp(temp2,curr2) )
		{
			printf("Enter amount: ");
			double amount;
			scanf("%lf",&amount);
			printf("%.2lf %s is %.2lf %s\n",amount,curr1,amount*rate,curr2);
			free(temp1);
			free(temp2);
			fclose(f);
			return;
		}
		free(temp1);
		free(temp2);
	}
	fclose(f);

	printf("No such curencys\nAppend with following currencys? y/n: ");
	char ch;
	scanf(" %c",&ch);
	if(ch=='y' || ch=='Y')
		addCurr(path,curr1,curr2);
}

void addCurr(char* path,char* curr1,char* curr2)
{
	FILE* f=fopen(path,"a");
	if(!f){
		printf("File not exist\n");
		return;
	}

	double rate;
	printf("Set the rate: ");
	scanf("%lf",&rate);
	fprintf(f,"%s %s %lf\n",curr1,curr2,rate);
	fprintf(stdout,"added!\n");
	fclose(f);
}

int main(void)
{
	char path[]="data.txt";
	char ch;

	do{
		printCurr(path);

		char* curr1=NULL;
		char* curr2=NULL;

		printf("Insert currency's separated by space: ");
		if( scanf("%ms %ms",&curr1,&curr2)!=2 )
		{
			printf("Input error\n");
			free(curr1);
			free(curr2);
			break;
		}
		convert(path,curr1,curr2);
		free(curr1);
		free(curr2);

		printf("Convert again? y/n: ");
		scanf(" %c",&ch);

	}while(ch=='y'||ch=='Y');
}

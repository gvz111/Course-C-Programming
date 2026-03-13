#include<stdio.h>
#include<stdlib.h>

int fequal(char* path1,char* path2)
{
	FILE* f1=fopen(path1,"r");
	FILE* f2=fopen(path2,"r");

	if(!f1 || !f2){
		printf("Not exist\n");
		return -1;
	}

	int c1,c2;
	while( (c1=fgetc(f1)) == (c2=fgetc(f2)) )
	{
		if(c1==EOF)
			return 1;
	}
	return 0;
}

int main(void)
{
	char path1[]="file1.txt";
	char path2[]="file2.txt";

	printf("%d\n",fequal(path1,path2));
}

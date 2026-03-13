#include<stdio.h>
#include<stdlib.h>

int fLength(char* path)
{
	FILE* f=fopen(path,"r");
	if(f)
		printf("Openned successful\n");
	else
	{
		printf("Denied\n");
		return -1;
	}
	int count=0;

	while(fgetc(f)!=EOF)
		count++;

	fclose(f);
	return count;
}

void main()
{
	printf("%d\n",fLength("file.txt"));
}

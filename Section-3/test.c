#include<stdio.h>
#include<stdlib.h>

void main()
{
	int nums[]={1,2,3,4,5};

	int *p=nums;
	for(; p<=&nums[4]; p++)
		printf("%d",*p);
	//////////////////////
		printf("\n");

	char str[]="Aliba";

	char *s=str;
	for(; *s!='\0'; s++)
		printf("%c",*s);

		printf("\n");
}

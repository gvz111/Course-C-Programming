#include<stdio.h>
#include<stdlib.h>
#include<string.h>

const char* tearThePetal(int petals)
{
	switch(petals % 6)
	{
		case 1: return "I love you";
		case 2: return "a little";
		case 3:	return "a lot";
		case 4: return "passionately";
		case 5: return "madly";
		case 0: return "not at all";
	}
	return "";
}

int main(void)
{
	int n=0;
	printf("type N:	");
	scanf("%d",&n);
	printf(" %s\n",tearThePetal(n));
}

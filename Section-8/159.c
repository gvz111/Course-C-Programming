#include<stdio.h>

void swapChar(char* path,char old,char neu)
{
	FILE* f=fopen(path,"r");
	if(!f){
		printf("Access denied\n");
		return;
	}
	FILE* copy=fopen("copy.txt","w");
	if(!copy){
		printf("Copy failed\n");
		fclose(f);
		return;
	}
	else
		printf("replacing...\n");

	int ch;
	while( (ch=fgetc(f)) !=EOF )
	{
		if(ch==old)
			fputc(neu,copy);
		else
			fputc(ch,copy);
	}
	fclose(copy);
	fclose(f);

	remove(path);
	rename("copy.txt",path);
}
int main(void)
{
	swapChar("file.txt",'h','o');
}

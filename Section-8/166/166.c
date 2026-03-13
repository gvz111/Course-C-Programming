#include<stdio.h>
#include<stdlib.h>
void printArr(int* arr,size_t n);

void saveNums(char* path,int* arr,size_t n){
	FILE* f= fopen(path,"wb");
	if(!f) return;

	fwrite(arr,sizeof(int),n,f);
	fclose(f);
}

void readNums(char* path,size_t n)
{
	FILE* f= fopen(path,"rb");
	if(!f) return;

	int* arr= malloc(n*sizeof(int));
	if(!arr){
		fclose(f);
		return;
	}

	if(fread(arr,sizeof(int),n,f)!= n)
		printf("Read error\n");

	printArr(arr,n);

	free(arr);
	fclose(f);
}

void printArr(int* arr,size_t n)
{
	for(int* i= arr; i < arr+n; i++ )
		printf("%d ",*i);
	printf("\n");
}

int main(void)
{
	char path[]= "file.bin";
	int arr[]= {1,2,3,4,5};

	size_t n= sizeof(arr)/sizeof(arr[0]);

	saveNums(path,arr,n);
	readNums(path,n);
}

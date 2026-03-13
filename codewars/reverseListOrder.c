#include<stdio.h>
#include<stdlib.h>

int* reverse_list(const int* array, size_t length)
{
	int* start = malloc(length * sizeof(int));
	int* end = start + length-1;

	while(length--)
		*end-- = *array++;

	return start;
}

int main(void)
{
	const int array[4]={1,2,3,4};
	int* p = reverse_list(array,4);

	for(int i=0; i < sizeof(array)/sizeof(array[0]); i++ )
		printf("%d ",p[i]);

	printf("\n");
	free(p);
}

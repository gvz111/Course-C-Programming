#include <stdio.h>
#include <stdlib.h>
#include "menuprogram.h"

int main()
{
	int arr[11]={};
	int choice=0;

	do
	{
		printf("1-Add number\n");
		printf("2-Print array\n");
		printf("3-Find number\n");
		printf("4-Remove number\n");
		printf("5-Print sorted\n");
		printf("6-Quit\n");
		printf("Make a choice: ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				addNumber(arr);
				break;
			case 2:
				printArray(arr);
				break;
			case 3:
				int item=0;
				printf("Which number search: ");
				scanf("%d",&item);
				printf(findNumber(arr,item)>0?"Found\n":"Not found\n");
				break;
			case 4:
				removeNumber(arr);
				break;
			case 5:
				printSorted(arr);
				break;
		}
	}while(choice!=6);
	printf("Good Bye!\n");

	return 0;
}

#include<stdio.h>
#include<stdlib.h>
#include"menuprogram.h"

void main()
{
	int choice=0;
	int arr[13]={};

	do
	{
		printf("Make a choice belong:\n");
		printf("1 -addNumber\n");
		printf("2 -printArray\n");
		printf("3 -findNumber\n");
		printf("4 -removeNumber\n");
		printf("5 -printSorted\n");
		printf("6 -Quit\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				int num=0;
				printf("Which number add: ");
				scanf("%d",&num);
				addNumber(arr,num);
				break;
			case 2:
				printArray(arr);
				break;
			case 3:
				int item=0;
				printf("Which number search: ");
				scanf("%d",&item);
				int index=findNumber(arr,item);
				printf((index>=0)?"Found\n":"Not found\n");
				break;
			case 4:
				int rem=0;
				printf("Which number remove: ");
				scanf("%d",&rem);
				removeNumber(arr,rem);
				break;
			case 5:
				printSorted(arr);
				break;
		}

	}while(choice!=6);
	printf("Good bye.\n");
}

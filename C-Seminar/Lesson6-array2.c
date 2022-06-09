#include <stdio.h>
#pragma warning(disable : 4996)


int main_6_20()
{
	int num;

	// 1
	int arr[10];
	for (int i = 0; i < 10; i++)
	{
		arr[i] = i;
	}
 
	// 2
	
	int arr2[10];
	for (int i = 0; i < 10; i++)
	{
		printf("please enter a value\n");
		scanf("%d", &num);
		arr2[i] = num;
	}

	for (int i = 9; i >= 0; i--)
	{
		printf("cell-%d is %d\n",i, arr2[i]);
	}
 
	// 3
	 
	int arr3[10];
	for (int i = 0; i < 10; i++)
	{
		printf("please enter a value\n");
		scanf("%d", &num);
		arr3[i] = num;
	}

	int theNum = arr3[8];
	for (int i = 0; i < 10; i++)
	{
		arr3[i] = arr3[i] + theNum;
	}

	for (int i = 0; i <10; i++)
	{
		printf("cell-%d is %d\n", i, arr3[i]);
	}


}
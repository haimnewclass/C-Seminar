#include <stdio.h>
#pragma warning(disable : 4996)


int main_6_30()
{

	int num = 34;
	int arr[10];

	arr[0] = 23;
	arr[4] = 100;
	arr[1] = arr[0] + arr[4];


	scanf("%d", &num);
	arr[2] = num;
	printf("--------------\n");

	/*
	printf("%d\n", arr[0]);
	printf("%d\n", arr[1]);
	printf("%d\n", arr[2]);
	printf("%d\n", arr[3]);
	printf("%d\n", arr[4]);
	printf("%d\n", arr[5]);
	printf("%d\n", arr[6]);
	printf("%d\n", arr[7]);
	printf("%d\n", arr[8]);
	printf("%d\n", arr[9]);
	*/

	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", arr[i]);
	}




	return 0;
}
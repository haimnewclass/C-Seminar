#include <stdio.h>
#pragma warning(disable : 4996)


int main_8_1()
{
	int arr[10];

	arr[0] = 122;
	arr[1] = 123;
	arr[2] = 123;

	int a = 5;
	arr[a] = 100;

	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", arr[i]);
	}


	return 0;
}
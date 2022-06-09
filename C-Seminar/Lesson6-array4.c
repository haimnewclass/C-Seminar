#include <stdio.h>
#pragma warning(disable : 4996)


int main_6_31()
{
	int arr[10];

	int idx = 2;
	arr[2] = 100;
	arr[idx] = 100;

	for (int i = 0; i < 10; i++)
	{
		arr[i] = i;
	}



	return 0;
}
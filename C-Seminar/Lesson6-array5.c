#include <stdio.h>
#pragma warning(disable : 4996)


int main_lesson6_5()
{
	int arr[10];
	 
	for (int i = 0; i < 10; i++)
	{
		int num;
		printf("please enter new number\n");
		scanf("%d", &num);
		arr[i] = num;
	}

	for (int i = 9; i >= 0; i--)
	{
		printf("%d\n", arr[i]);
	}
	return 0;
}
#include <stdio.h>
#pragma warning(disable : 4996)


int main_7_4()
{
	int a;
	
	a = bbb1(10);
	printf("\n");

	a = bbb1(20);
	printf("\n");


	a = PaintStars(5);
	printf("\n");

	a = PaintStars(7);
	printf("\n");


	return 0;
}

int PaintStars(int cols)
{
	for (int i = 0; i < cols; i++)
	{
		printf("*");
	}	
	return 0;
}

int bbb1(int size)
{
	for (int j = 0; j < size; j++)
	{
		for (int i = 0; i < size; i++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
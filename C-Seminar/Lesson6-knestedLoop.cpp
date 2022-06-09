#include <stdio.h>
#pragma warning(disable : 4996)


int main()
{
	// external loop
	for (int i = 0; i < 5; i++)
	{
		printf("$");
		// internal loop
		for (int x = 0; x < 10; x++)
		{
			printf("*");
		}
		printf("\n");
	}


	return 0;
}


int main_6_1()
{
	for (int i = 0; i < 3; i++)
	{
		// internal loop
		for (int x = 0; x < 5; x++)
		{
			printf("*%d-%d ", i, x);
		}
		printf("\n");
	}

	return 0;
}

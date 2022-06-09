#include <stdio.h>
#pragma warning(disable : 4996)


int main_6_work9()
{
	// 0000000
	// 1111111
	// 0000000 2222222
	// 1111111 3333333
	// 0000000 4444444
	// 1111111 5555555
	// 
	// external loop
	for (int i = 0; i <= 5; i++)
	{	
		for (int j = 0; j < 7; j++)
		{			
			int num = i % 2;
			printf("%d", num);			 
		}
		printf("\n");
	}
	return 0;
}

int main_work6_5()
{
	// 12345
	// 23456
	// 34567
	// 45678
	// 
	// external loop
	for (int i = 0; i <= 3; i++)
	{
		// internal loop
		for (int x = 1; x <= 5; x++)
		{
			printf("%d", x+i);
		}
		printf("\n");
	}
	return 0;
}

int main_work6_4()
{
	// 123456
	// 123456
	// 123456
	// 
	// external loop
	for (int i = 0; i < 3; i++)
	{		
		// internal loop
		for (int x = 1; x <=6; x++)
		{			
			printf("%d",x);
		}
		printf("\n");
	}
	return 0;
}
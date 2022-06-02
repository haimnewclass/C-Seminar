#include <stdio.h>
#pragma warning(disable : 4996)


int main_3_5()
{
	int num;
	int modolu;
	float num1;
	float balls = 11;
	float kids = 2;
	num = 1 + 1;
	num = 1 - 1;
	num = 1 * 1;
	num = 1 / 1;
	num = 11 / 2;
	modolu = 11 % 2;
	num1 = balls / kids;

	scanf("%d", &num);
	int ret = num % 2;
	if (ret == 0)
	{
		printf("Zugi");
	}
	else
	{
		printf("Not Zugi");
	}


	return 0;
}



#include <stdio.h>
#pragma warning(disable : 4996)


int main_7_1()
{
	int a;

	a = CalculateSum(20, 30, 40);
	printf("%d\n", a);

	a = CalculateMult(22, 300, 4078);	
	printf("%d\n", a);
	
	a = CalculateSum(45, 0, 407);
	printf("%d\n", a);

	return 0;
}

int CalculateSum(int num1, int num2,int num3)
{
	// logic

	int ret;
	ret = num1 + num2 + num3;

	return ret;
}


int CalculateMult(int num1, int num2, int num3)
{
	// logic

	int ret;
	ret = num1 * num2 * num3;

	return ret;
}

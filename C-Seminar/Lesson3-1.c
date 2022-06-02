#include <stdio.h>
#pragma warning(disable : 4996)


int main_3_1()
{
	int num;
	long num3=1;
	num = 100;
	int num2;

	printf("ABC:%d\n", num);
	printf("Please enter 2 numbers seperated by ABC");
	scanf("ABC%dABC%d", &num,&num2);
	printf("The entered value is %d\n", num);
	return 0;
}



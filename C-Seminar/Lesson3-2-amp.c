#include <stdio.h>
#pragma warning(disable : 4996)


int main_3_2()
{
	int num;
	 
	int num2 = 200;

	num = num2;
	num = &num2;

	printf("Variable num2: %d %d",num2,&num2);
	scanf("ABC%dABC%d", &num, &num2);

	return 0;
}



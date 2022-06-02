#include <stdio.h>
#pragma warning(disable : 4996)

int main_2_4()
{
	int num1 = 0;	 
	int num2 = 0;
	int result;


	printf("Please enter 2 numbers + ENTER\n");
	// input valu from user
	scanf("%d %d", &num1,&num2);


	// calculate muliple
	result = 2 * num1 * num2;

	// print result to user
	printf("%d Kaful %d Kaful 2 = %d", num1,num2, result);


	return 0;
}
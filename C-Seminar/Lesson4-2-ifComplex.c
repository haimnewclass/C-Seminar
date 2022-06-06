#include <stdio.h>
#pragma warning(disable : 4996)


int main_4_2()
{
	int num1;
	scanf("%d", &num1);

	// (20+5) * (2+6)

	//between 5 to 10
	// && and
	// || or
	// if (0 > 5 && 0 < 10)
	//	   false      false
	//     true  or   false
	if (num1 > 5 || num1 < 10)
	{
		printf("***");
	}

	if (num1 == 3 || num1 == 4)
	{
		printf("***");
	}
	else
	{
		printf("+++");
	}
	


}
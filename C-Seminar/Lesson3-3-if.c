#include <stdio.h>
#pragma warning(disable : 4996)


int main()
{
	int num;
	
	// conditions

	scanf("%d", &num);
	
	// num > 100
	// num < 100
	// num == 100
	// num != 100
	// num >= 100
	// num <= 100

	if(num>=100)
	{
		printf("BIG");
	}
	else   
	{
		printf("SMALL");
	}
	
	return 0;
}



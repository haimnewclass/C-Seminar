#include <stdio.h>
#pragma warning(disable : 4996)


int main_3_4()
{
	int num;

	// conditions

	

	int a = 100;
	a = 10;
	a = a + 1;
	a++;

	a = a - 1;
	a--;

	scanf("%d", &num);
	if (num > 100)
	{
		a = 100;
	}
	else
	{
		a = 0;
	}
	
	// short condition
	a = (num > 100) ? 100 : 0;


	a = a * 2;
	printf("%d", a);
	return 0;
}



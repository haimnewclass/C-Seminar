#include <stdio.h>
#pragma warning(disable : 4996)


int main_3_6()
{
	int num;
	 
	scanf("%d", &num);
	 
	if (num == 100)
	{
		printf("Bingo");
	}
	else if (num > 100)
	{
		printf("Winner");
	}
	else  
	{
		printf("Looser");
	}


	return 0;
}



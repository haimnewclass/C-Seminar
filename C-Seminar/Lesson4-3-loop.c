#include <stdio.h>
#pragma warning(disable : 4996)


int main_4_3()
{

	
	int idx;

	idx = 0;	
	while(idx < 10)
	{
		printf("*");
		idx = idx + 1;
	}
	printf("\n");

	int num;
	int sum = 0;
	 
	idx = 0;
	while(idx<5)
	{

		printf("Please enter new number\n");
		scanf("%d", &num);
		sum = sum + num;

		idx = idx + 1;
	}
	printf("total sum is %d",sum);

	return 0;

	int a = 10;
	for (int i = 0; i < (i+1); i++)
	{

	}


}
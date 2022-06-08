#include <stdio.h>
#pragma warning(disable : 4996)


int main_5_2()
{
	// counter loop
	int i;
	i = 0;
	while (i < 10)
	{
		//i++ = i=i+1;
		printf("%d", i);
		i++;
	}

	int sum = 0;
	int num = 0;
	// condition loop
	while (sum < 100)
	{
		scanf("%d", &num);
		printf("%d", num * 10);
		sum = sum + num;
	}

	printf("Total:%d", sum);
	printf("Total:%d", sum);
}
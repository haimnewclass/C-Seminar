#include <stdio.h>
#pragma warning(disable : 4996)


int main_5_Homework_10()
{
	int num;
	
	printf("please enter number, to stop loop: 0");
	scanf("%d", &num);

	while (num!=0)
	{
		printf("%d\n", num * 3);
		printf("please enter number, to stop loop: 0");
		scanf("%d", &num);
	}

	printf("Thank you!!!");

	return 0;
}

int main_5_Homework_9()
{
	int i;
	i = 1;
	while (i <= 8)
	{
		// Loop Body
		// 2=1+1
		// 4=2+2
		// 6=3+3
		int sum = i + i;
		printf("%d=%d+%d\n",sum,i,i);
		i = i + 1;
	}
	
	return 0;
}



int main_5_Homework_4()
{
	int i;
	i = 70;
	while (i <= 86)
	{
		// Loop Body
		printf("%d", i);
		i = i + 1;
	}

	return 0;
}

int main_5_Homework_1()
{
	int i;
	i = 0;
	while (i < 100)
	{
		// Loop Body
		printf("$");
		i = i + 1;
	}
	return 0;
}
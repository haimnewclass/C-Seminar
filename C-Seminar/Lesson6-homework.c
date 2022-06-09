#include <stdio.h>
#pragma warning(disable : 4996)


int main_6_homework_13()
{
	int count;
	 
	scanf("%d", &count);

	for (int i = 0; i <= count; i=i+4)
	{
		printf("hi\n",i);
	}
	return 0;
}


int main_6_homework_12()
{
	int count;

	scanf("%d", &count);

	for (int i = 0; i <= count; i = i + 2)
	{
		printf("shalom\n", i);
	}
	return 0;
}


int main_6_homework_10()
{
	int start;
	int end;

	scanf("%d,%d", &start, &end);

	for (int i = start; i <= end; i++)
	{
		printf("%d\n", i);
	}
	return 0;
}


int main_6_homework_9()
{
	int num;

	scanf("%d", &num);

	for (int i = 0; i < num; i++)
	{
		printf("*");
	}
	return 0;
}



int main_6_homework_8()
{
	for (int i = 1; i <= 5; i++)
	{
		printf("%d\n", i);
	}
	for (int i = 5; i >=1 ; i--)
	{
		printf("%d\n", i);
	}

	return 0;
}


int main_6_homework_6()
{
	for (int i = 1000; i > 10; i = i - 9)
	{
		printf("%d\n", i);
	}

	return 0;
}

int main_6_homework_3()
{
	for (int i = 100; i < 1000; i = i + 4)
	{
		printf("%d\n", i);
	}

	return 0;
}
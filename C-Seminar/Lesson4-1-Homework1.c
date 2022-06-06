#include <stdio.h>
#pragma warning(disable : 4996)


int main_4_question1()
{
	int num;
	scanf("%d", &num);

	int sheerit;

	sheerit = num % 2;

	if (sheerit == 0)
	{
		printf("Zugi");
	}
	else
	{
		printf("EZugi");
	}
	return 0;
}



int main_4_question2()
{
	int num1;
	int num2;
	int num3;
	scanf("%d %d %d", &num1, &num2, &num3);

	int sum = num1 + num2;
	if (sum < num3)
	{
		printf("%d", num3);
	}
	else
	{
		printf("%d", sum);
	}

	return 0;
}




int main_4_question4()
{
	int num1;
	int num2;
	int num3;
	scanf("%d %d %d", &num1, &num2, &num3);

	int sum = num1 + num2 + num3;

	int sheerit = sum % 3;

	if (sheerit == 0)
	{
		printf("No float in avg");
	}
	else
	{
		printf("There is float in avg");
	}

	return 0;
}





int main_4_question6()
{
	int num;
	int num1;
	int num2;
	int num3;

	printf("Please enter your lucky num\n");
	scanf("%d", &num);

	printf("Please enter 3 numbers\n");
	scanf("%d %d %d", &num1, &num2, &num3);

	if (num == num1)
	{
		printf("WIN");
	}
	else if (num==num2)
	{
		printf("WIN");
	}
	else if (num == num3)
	{
		printf("WIN");
	}

	return 0;
}



int main_4_question7()
{
	int num1,num2;
	scanf("%d %d", &num1, &num2);
	printf("%d", (num1 == num2) ? (100) : (num1 + num2));

	return 0;
}


int main_4_question8()
{
	int num1, num2,num3;
	scanf("%d %d %d", &num1, &num2,&num3);

	if (num1 > num2)
	{
		if (num1 > num3)
		{
			printf("num1 is bigest");
		}
	}
	
	if (num2 > num1)
	{
		if (num2 > num3)
		{
			printf("num2 is bigest");
		}
	}

	if (num3 > num1)
	{
		if (num3 > num2)
		{
			printf("num3 is bigest");
		}
	}

	return 0;
}
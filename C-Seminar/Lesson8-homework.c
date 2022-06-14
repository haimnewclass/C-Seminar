#include <stdio.h>
#pragma warning(disable : 4996)


int ReadNumbers()
{
	int num1, num2, num3;
	printf("Please enter 3 numbers\n");
	scanf("%d,%d,%d", &num1, &num2, &num3);
	int avg;
	avg = Avg(num1, num2, num3);
	printf("The Avg of %d+%d+%d is %d", num1, num2, num3, avg);

	return avg;
}

int Avg(int n1, int n2, int n3)
{
	int retVal;

	int sum = n1 + n2 + n3;

	retVal = sum/3;

	return retVal;
}

int AddSum(int x)
{
	int sum = 0;
	int num;

	for (int i = 0; i < x; i++)
	{
		scanf("%d", &num);
		sum = sum + num;
	}
	
	return sum;
}

int Devide(int num)
{
	int ret;
	ret = num / 2;
	return ret;
}

int main_8_homework()
{
	int a;
	int b;
	int c;

	c = Devide(100);
	printf("Devide reslt %d\n", c);

	c = Devide(10);
	printf("Devide reslt %d\n", c);

	c = Devide(88);
	printf("Devide reslt %d\n", c);

	printf("Devide reslt %d\n", Devide(122));

	b = AddSum(5);
	printf("Sum is %d\n", b);

	a = ReadNumbers();
	printf("Read Numbers is %d\n", a);
	return 0;
}



#include <stdio.h>
#pragma warning(disable : 4996)


int main_7_30()
{

	int a;

	a = aaa(40);
	a = aaa(440);
	a = aaa(340);

	float b = GetDevide(234234);
	printf("%d", b);

	DrawPlus(12);
	DrawPlus(100);

	printf("\n");

	int s1, s2;
	scanf("%d,%d", &s1, &s2);
	RangeValues(s1, s2);

	int sum = 0;
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &s1);
		int r = CheckIfZugi(s1);
		DrawPlus(r);
		printf("\n");

	}


	return 0;
}

int CheckIfZugi(int num)
{
	int x;

	if (num % 2 == 0)
	{
		x = 10;
	}
	else
	{
		x = 20;
	}

	return x;
}

int RangeValues(int start,int end)
{
	for (int i = start; i <= end; i++)
	{
		printf("%d",i);
	}
	return 0;
}

int DrawPlus(int count)
{
	for (int i = 0; i < count; i++)
	{
		printf("+");
	}

	return 0;
}


int aaa(int num)
{
	int sum = num * num;

	return sum;
}

float GetDevide(float a)
{
	float d = 23;
	float ret = a / d;

	return ret;	
}


#include <stdio.h>
#pragma warning(disable : 4996)


int main_8_work1()
{
	char str[100];
	gets(str);
	printf("%c", str[2]);
	printf("%s", str);

	return 0;
}


int main_8_work3()
{

	char str[100];
	gets(str);

	int i = 0;
	int count = 0;
	while (str[i] != 0)
	{
		if (str[i] == 'A')
		{
			count++;
		}

		i++;
	}

	if (count > 0)
	{
		printf("The string %s has A!!!", str);
	}

	return 0;
}
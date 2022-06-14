#include <stdio.h>
#pragma warning(disable : 4996)


int main_8_3()
{
	char ch;
	ch = 65; // A character
	char ch2;
	ch2 = 'X';
	// %c -> print character
	// %s -> print string
	// %d -> print digits
	printf("%c\n", ch);
	printf("%d\n", ch);
	printf("%c\n", ch2);
	printf("%d\n", ch2);

	char ch3;
	for (int i = 65; i <= 90; i++)
	{
		ch3 = i;
		printf("%d:%c\n", ch3, ch3);
	}

	for (char i = 'A'; i <= 'Z'; i++)
	{
		printf("%d:%c\n", i, i);
	}

	return 0;
}
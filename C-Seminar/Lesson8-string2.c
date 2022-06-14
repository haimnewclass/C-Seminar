#include <stdio.h>
#pragma warning(disable : 4996)


int main_8_9()
{
	// array of char String
	char str[100];
	int num;
	// &num -> address of num location
	// str -> address of array
	// srr = &str[0]
	//scanf("%d", &num);
	// to get string from user
	gets(str);

	printf("%s", str);

	return 0;
}
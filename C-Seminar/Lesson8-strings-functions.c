#include <stdio.h>
#include <string.h>
#pragma warning(disable : 4996)


int main_8_100()
{
	char str[100];

	gets(str);
	
	int a;

	// returns the length of string
	a = strlen(str);
	for (int i = 0; i < a; i++)
	{

	}
	
	char str2[100];
	// copy string into other string
	strcpy(str2, "AbraKadabra");
	strcpy(str2, str);

	strcpy(str2, "Kuku");
	// append the string at the end of the destination string
	strcat(str2, " ");
	strcat(str2, str);
	strcat(str2, " ");
	strcat(str2, ".");

	// compare 2 strings and returns
	// 0 if strings are equal
	// 0< str1 less than str2
	// 0> str2 less than str1
	a = strcmp("ABC", "ABC");
	a = strcmp(str2, "ABc");
	a = strcmp("ABc", str);

	return 0;
}


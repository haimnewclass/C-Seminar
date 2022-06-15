#include <stdio.h>
#include <string.h>
#pragma warning(disable : 4996)

int main_9_2()
{

	char str1[1000];
	char str2[1000];

	strcpy(str1, "1234567890abamama0907574aba53423");
	strcpy(str2, "aba");

	char* pt = strstr(str1, str2);
		
	printf("%s", pt);

	return 0;
}
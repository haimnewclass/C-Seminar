#include <stdio.h>
#include <string.h>
#pragma warning(disable : 4996)

int main()
{

	char str1[1000];
	char str2[1000];

	strcpy(str1, "1234567890abamama090757453423");
	strcpy(str2, "aba");

	char* pt = strstr(str1, str2);
	
	printf("%s", pt);

	return 0;
}
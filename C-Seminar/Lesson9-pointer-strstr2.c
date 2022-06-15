#include <stdio.h>
#include <string.h>
#pragma warning(disable : 4996)

int main()
{

	char str1[1000];
	char str2[1000];

	gets(str1);
	gets(str2);

	char* pt = strstr(str2, str1);
	if (pt != 0)
	{
		printf("Included\n");
	}

	printf("%s\n", pt);
	pt=pt+strlen(str1);
	printf("%s\n", pt);
	pt++;
	printf("%s\n", pt);

	return 0;
}
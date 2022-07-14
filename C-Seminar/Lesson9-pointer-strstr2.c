#include <stdio.h>
#include <string.h>
#include <limits.h>
#pragma warning(disable : 4996)

int main()
{

	char str1[1000];
	char str2[1000];
	unsigned char numCars=89;
	
	gets(str1); //"1234567890123456789"
	gets(str2);
	char* m= str1;
	char* ptr = str1;
	printf("%s\n", m);

	m = m + 5;

	printf("%s\n", m);


	for (int i = 0; i < 8; i++)
	{
		m--;
	}
	printf("%s\n", m);

	
	int a,b;
	scanf("%d %d", &a, &b);

	m = m - 3;
	m = a * b;
	printf("%s\n", m);

	for (int i = 0; i < strlen(str1); i=i+2)
	{
		printf("%s\n", m);
	}


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
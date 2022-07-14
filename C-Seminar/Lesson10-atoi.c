#include <stdio.h>
#pragma warning(disable : 4996)


int main_10_atio()
{
	char str[1000];
	
	gets(str);
				

	char str1[100];
	strcpy(str1, "100");

	char str2[100];
	strcpy(str2, "20");

	int num1, num2,sum;
	
	num1 = atoi(str1);
	num2 = atoi(str2);
	sum = num1 + num2;
	printf("");
	return 0;
}

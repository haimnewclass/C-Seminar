#include <stdio.h>
#include <string.h>
#pragma warning(disable : 4996)



int main_9_1()
{
	char str[1000];

	strcpy(str, "Shalom");

	// kuku is variablr of pointer type
	char *kuku;

	kuku = str;

	strcpy(kuku, "Lhit");

	

	// 
	int a = 199;
	int* b;
	b = &a;
	*b = 198;

	return 0;
}
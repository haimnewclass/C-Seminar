#include <stdio.h>
#pragma warning(disable : 4996)


int main_8_5()
{
	char ch = 'A';
	// array of char String
	char str[11];

	str[0] = 'A';
	str[1] = 'B';
	str[2] = 'A';
	str[3] = ' ';
	str[4] = 'S';
	str[5] = 'H';
	str[6] = 'A';
	str[7] = 'L';
	str[8] = 'O';
	str[9] = 'M';
	str[10] = 0; // 0 is the end of string NULL

	int pos;
	scanf("%d", & pos);
	str[pos] = 0;
	printf("%s %c", str,str[8]);

	return 0;
}
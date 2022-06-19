#include <stdio.h>
#include <string.h>
#pragma warning(disable : 4996)


int main_hw_1()
{
	char str[1000];
	char strTarget[1000];
	char* ptr;
	char* ptrTarget;

	gets(str);

	ptr = str;
	ptrTarget = strTarget;

	int len = strlen(str);
	ptrTarget = ptrTarget + len - 1;
	for (int i = 0; i < len; i++)
	{
		char c = *ptr;
		*ptrTarget = c;

		ptrTarget = ptrTarget - 1;
		ptr = ptr + 1;
	}
	ptrTarget = ptrTarget + 1;

	// close with null	
	ptrTarget = ptrTarget + len;
	*ptrTarget = 0;	 
	printf("%s", strTarget);
}



int main_10_homework_2()
{
	char str[1000];
	char strTarget[1000];
	char* ptr;
	char* ptrTarget;

	gets(str);

	// str -> address of string
	// str[0] ->first char of string

	ptr = str;
	ptrTarget = strTarget;

	// step 1
	*ptrTarget = *ptr;

	// step 2
	ptr = ptr + 4;
	ptrTarget = ptrTarget + 1;
	*ptrTarget = *ptr;

	// step 3
	ptr = ptr + 3;
	ptrTarget = ptrTarget + 1;
	*ptrTarget = *ptr;

	// close the string
	ptrTarget = ptrTarget + 1;
	*ptrTarget = 0;




	printf("%s", ptrTarget);


}


int main_10_homework_1()
{
	char str[1000];
	char* ptr;

	gets(str);

	// str -> address of string
	// str[0] ->first char of string
	
	ptr = str;
	ptr = ptr + 1;

	printf("%s", ptr);
	

}
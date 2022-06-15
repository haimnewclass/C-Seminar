#include <stdio.h>
#include <string.h>
#pragma warning(disable : 4996)



int main_9_hw_13()
{
	 
	char strFromUser[1000];
	char strLucky[1000];
	
	printf("please enter your lucky string\n");
	gets(strLucky);

	for (int i = 0; i < 10; i++)
	{
		printf("please enter your simple string\n");
		gets(strFromUser);

		int c = strcmp(strLucky, strFromUser);
		if (c == 0)
		{
			printf("%s", strFromUser);
		}
	}
	return 0;
}

int main_9_hw_12()
{
	printf("\nexercise 12\n");
	char str11[50];
	char str12[5000];
	str12[0] = 0;
	char str13[2];
	strcpy(str13, ",");

	printf("Please write the string\n");

	for (int i = 0; i < 10; i++)
	{
		gets(str11);
		strcat(str12, str11);
		strcat(str12, str13);
	}
	printf("%s, END .\n", str12);

	return 0;
}

int main_9_hw_11()
{
	char allStrings[100];
	char oneString[100];
	allStrings[0] = 0;

	printf("Please enter string\n");
	gets(oneString);

	int count;
	printf("Please enter number\n");
	scanf("%d", &count);


	for (int i = 0; i < count; i++)
	{
		strcat(allStrings, oneString);
	}

	printf("%s\n", allStrings);
	return 0;
}

int main_9_hw_10()
{
	char allStrings[100];
	char oneString[100];
	allStrings[0] = 0;

	printf("Please enter string\n");
	gets(oneString);


	for (int i = 0; i < 5; i++)
	{	
		strcat(allStrings, oneString);
	}

	printf("%s\n", allStrings);
	return 0;
}
int main_9_hw_9()
{
	char str1[100];
	char str2[100];

	printf("Please enter 2 strings\n");
	gets(str1);
	gets(str2);

	strcat(str1, str2);
	printf("%s", str1);

}
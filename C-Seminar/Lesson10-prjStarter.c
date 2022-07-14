#include <stdio.h>
#include <string.h>
#pragma warning(disable : 4996)


int main_10_100()
{
	char line[1000];
	//line 
	gets(line);
	//12+212+2+531

	int sum = 0;
	char action = '+';
	for (int i = 0; i < strlen(line); i=i+1)
	{		
		if (line[i] == '+' || line[i] == '-')
		{
			if (line[i] == '+')
			{
				action = '+';
			}else
			{ 
				action = '-';
			}
		}
		else
		{
			char num[100];
			// stcncpy does not store NULL
			strncpy(num, line + i, 1);
			num[1] = 0;
			int  aaa = atoi(num);

			//sum = (action == '+') ? aaa : (aaa * -1);

			if (action == '+')
			{
				sum = sum + aaa;
			}
			else
			{
				sum = sum - aaa;
			}
		}
	}

	printf("%s=%d", line, sum);
	return 0;
}


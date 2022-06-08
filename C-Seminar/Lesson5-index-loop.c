#include <stdio.h>
#pragma warning(disable : 4996)


int main_5_5()
{
	int i;
	i = 0;
	while (i < 10)
	{
		//i++ = i=i+1;
		printf("%d\n", i);
		i++;
	}

	// for (declate variable ; continue condition ; increment)
	for (int j=0 ; j<5 ; j++)
	{
		printf("%d\n", j);
	}
}
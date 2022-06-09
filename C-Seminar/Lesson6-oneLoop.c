#include <stdio.h>
#pragma warning(disable : 4996)

int main_6_hw_oneloop()
{
	//1 1
	//2 2
	//3 3
	//4 4
	//5 5
	//5 6 - 1
	//4 7 - 3
	//3 8 - 5
	//2 9 - 7
	//1	10 - 9
	int helper = 1;
	for (int i = 1; i <= 10; i = i + 1)
	{
		if (i <= 5)
		{
			printf("%d\n", i);
		}
		else
		{
			printf("%d\n", i - helper);
			helper = helper + 2;
		}
	}
	return 0;
}

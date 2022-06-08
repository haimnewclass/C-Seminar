#include <stdio.h>
#pragma warning(disable : 4996)




int main_5_8()
{
	/* 1+3=4
2+6 = 8
3+9=12
4+12=16
5+15=20
6+24=24 
	  */
	for (int i = 1; i <= 20; i++)
	{
		int num1 = i;
		int num2 = i*3;
		int result = num1 + num2;
		printf("%d+%d=%d\n", num1, num2, result);
	}
}



int main_5_7()
{
	  /*1 + 2 = 3
		2 + 3 = 5
		3 + 4 = 7
		4 + 5 = 9
		*/
	for (int i = 1; i <= 20; i++)
	{
		int num1 = i;
		int num2 = i + 1;
		int result = num1 + num2;
		printf("%d+%d=%d\n",num1,num2,result);
	}
}
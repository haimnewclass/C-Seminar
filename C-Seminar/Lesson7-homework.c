#include <stdio.h>
#pragma warning(disable : 4996)


int main_7_answer9()
{
	//	++++++++++
	//	+        +
	//	+        +
	//	+        +
	//	+        +
	//	++++++++++

	//	++++++++++
	//	+        +
	//	++++++++++
	//	++++++++++
	//	++++++++++
	//	++++++++++

	// paint line 
	for (int line = 0; line <= 5; line++)
	{
		// paint columns
		for (int col = 0; col <= 9; col++)
		{
			// range for lines 1-4 and column 1-8
			if (line >= 1 && line<= 4 && col>=1 && col<=8)
			{
				printf(" ");
			}
			else
			{
				printf("+");
			}
			
		}
		printf("\n");
	}

	return 0;
}


int main_7_answer4()
{
	for (int j = 1; j <= 10; j++)
	{
		for (int i = 1; i <= 10; i++)
		{
			printf("%d ", i*j);
		}
		printf("\n");
	}
	
	return 0;
}


int main_7_answer5()
{

		//1111111111
		//22222222
		//33333333
		//1111111111
		//22222222
		//33333333
		//1111111111
		//22222222
		//33333333
	for (int paragraphes = 0; paragraphes < 3; paragraphes++)
	{
		for (int lines = 1; lines <= 3; lines++)
		{			
			int columnCount;

			if (lines == 1)
			{
				columnCount = 10;
			}
			else
			{
				columnCount = 8;
			}

			// for (int columns = 0; columns < (lines==1)?(10):(8); columns++)
			for (int columns = 0; columns < columnCount; columns++)
			{
				printf("%d", lines);
			}


			printf("\n");
		}
	}

	return 0;
}

int main_7_answer3()
{

	//22222222
	//33333333
	//33333333
	//44444444
	//44444444
	//44444444
	//33333333
	//33333333
	//22222222
	for (int lines = 0; lines < 9; lines++)
	{
		for (int columns = 0; columns < 8; columns++)
		{
			// lines == 0 - first line
			// lines = 8 - last line

			if (lines == 0 || lines == 8)
			{
				printf("2");
			}
			// 3,4,5
			else if(lines >=3 && lines <= 5)
			{
				printf("4");
			}
			else
			{
				printf("3");
			}
		}
		printf("\n");
	}
	return 0;
}



int main_7_answer2()
{

		//22222222
		//33333333
		//33333333
		//33333333
		//33333333
		//33333333
		//33333333
		//33333333
		//22222222
	for (int lines = 0; lines < 9; lines++)
	{
		for (int columns = 0; columns < 8; columns++)
		{
			// lines == 0 - first line
			// lines = 8 - last line

			if (lines == 0 || lines == 8)
			{
				printf("2");
			}
			else
			{			
				printf("3");
			}
		}
		printf("\n");
	}
	return 0;
}


int main_7_answer1()
{
	for (int lines = 100000; lines <100009; lines++)
	{
		for (int columns = 0; columns < 8; columns++)
		{
			printf("2");
		}		
		printf("\n");
	}
	return 0;
}

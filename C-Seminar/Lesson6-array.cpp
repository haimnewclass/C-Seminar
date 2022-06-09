#include <stdio.h>
#pragma warning(disable : 4996)


int main()
{
	// Array -
	int students[6];
	
	students[0] = 100;
	students[1] = 89;
	students[2] = 77;
	students[5] = 80;
	
	for (int i = 0; i <=3; i++)
	{
		printf("%d\n", students[i]);
	}


	for (int i = 0; i <= 5; i++)
	{
		int num;
		printf("please enter value for student %d\n", i);
		scanf("%d", &num);
		students[i] = num;
	}

	int sum = 0;

	for (int i = 0; i <= 5; i++)
	{		
		sum = sum + students[i];
	}

	printf("Avg is:%d", sum / 6);




	return 0;
}
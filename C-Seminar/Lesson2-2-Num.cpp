#include <stdio.h>
#pragma warning(disable : 4996)

int main_2_2()
{
	//1
	int var1 = 123;
	printf("%d", var1);
	//-------------------------------

	//2
	short num1;
	short num2;
	num1 = 76;
	num2 = 234;
	short sum;
	sum = num1 + num2;
	//--------------------------------

	//3
	unsigned long carPrice = 140000;
	unsigned long shoppingPrice = 3000;
	long salleryValue = 10000;
	long total;
	total = salleryValue - (carPrice + shoppingPrice);
	printf("Car %d + Shopping %d. My Sallery %d. Total %d"
		, carPrice, shoppingPrice, salleryValue, total);

	return 0;
}
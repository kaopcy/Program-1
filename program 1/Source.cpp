#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int intercept(int input, int m, int input1)
{
	int i, sum_intercept = 0;
	for (i = m; i <= input; i += m)
	{
		if (i % input1 == 0)
		{
			sum_intercept += i;
		}
	}
	return sum_intercept;
}
int input_forsum1()
{
	int x, y;
	printf("Enter first number : ");
	scanf("%d", &x);
	if (x <= 0)
	{
		y = 0;
		printf("\nError");
		exit(0);
	}
	else
		return x;
}
int input_forsum2()
{
	int x, y;
	printf("Enter second number : ");
	scanf("%d", &x);
	if (x <= 0)
	{
		y = 0;
		printf("\nError");
		exit(0);
	}
	else
		return x;
}
int sum3(int input, int m)
{
	int i, sum = 0;
	printf("====================================================================================\n");
	printf("All first number is\n");
	for (i = m; i <= input; i += m)
	{
		printf("%d ", i);
		sum = sum + i;
	}
	return sum;
}
int sum4(int input, int m)
{
	int i, sum = 0;
	printf("\n\nAll second number is\n");
	for (i = m; i <= input; i += m)
	{
		printf("%d ", i);
		sum = sum + i;
	}
	return sum;
}
int main()
{

	printf("This program use to find sum of all multiple of first number and second number below maximum number.\n\n\n**********CAUTION this program can take only positive integer**********\n\n\n");
	int x, y;
	x = input_forsum1();//sum of first number
	y = input_forsum2();//sum of second number
	int input;//maximum number
	printf("Enter number for maximum :");
	scanf("%d", &input);
	if (input <= 0)
	{
		printf("Error");
	}
	else
	{
		input = input - 1;
		printf("\n\nSum of all multiples is %d\n", sum3(input, x) + sum4(input, y) - intercept(input, y, x));//sum=first+second-intercept
	}
}
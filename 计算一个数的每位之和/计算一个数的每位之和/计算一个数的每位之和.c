#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
int DigitSum(int n)
{
	if (n <= 0)
		return 0;
	else
	{
		return DigitSum(n / 10) + (n % 10);
	}
}
int main()
{
	int i = 0;
	printf("input the number:");
	scanf("%d", &i);
	printf("%d\n", DigitSum(i));
	system("pause");
	return 0;
}
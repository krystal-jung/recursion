#include <stdio.h>
int fib(int n){
	if (n == 1){
		return 1;
	}
	if (n == 2){
		return 1;
	}
	return fib(n - 1) + fib(n - 2);
}

int main()
{
	int n = 10;
	int res = fib(n);
	printf("%d\n", res);
	system("pause");
	return 0;
}
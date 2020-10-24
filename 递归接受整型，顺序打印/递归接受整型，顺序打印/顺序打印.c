#include <stdio.h>
int print(int n){
	if (n > 9){
		print(n /10);
	}
	printf("%d ", n % 10);
}



int main()
{
	int num = 12345;
	print(num);
	system("pause");
	return 0;
}
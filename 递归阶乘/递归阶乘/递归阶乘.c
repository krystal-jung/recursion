int fact(int n){
	if (n <= 1){
		return 1;
	}
	else{
		return n*fact(n - 1);
	}
}

#include <stdio.h>
int main()
{
	int res = fact(5);
	printf("%d\n", res);
	system("pause");
	return 0;
}
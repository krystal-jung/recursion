#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int power(int n,int k){
	if (k == 0){
		return 1;
	}
	return n*power(n, (k - 1));
}

int main()
{
	int n = 0;
	int k = 0;
	printf("请输入n的k次方中n和k的值：");
	scanf("%d %d", &n, &k);
	printf("%d\n", power(n, k));
	system("pause");
	return 0;

}
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
	printf("������n��k�η���n��k��ֵ��");
	scanf("%d %d", &n, &k);
	printf("%d\n", power(n, k));
	system("pause");
	return 0;

}
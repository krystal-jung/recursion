#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int FrogJump(int n){
	if (n == 1){
		return n;
	}
	if (n == 2){
		return n;
	}
	return FrogJump(n - 1) + FrogJump(n - 2);
}

int main()
{
	int n = 0;
	printf("ÇëÊäÈëÌ¨½×Êı£º");
	scanf("%d", &n);
	int res = FrogJump(n);
	printf("%d\n", res);
	system("pause");
	return 0;
}
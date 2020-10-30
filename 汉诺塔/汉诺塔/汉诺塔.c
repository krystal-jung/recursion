#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>
void hanoi(int n, char a, char b, char c){
	if (n == 1){
		printf("第%d个圆盘:%c移动到%c\n", n, a, c);
	}
	else{
		hanoi(n - 1, a, c, b);
		printf("第%d个圆盘:%c移动到%c\n", n, a, c); 
		hanoi(n - 1, b, a, c);
	}
}
int main()
{
	int n;
	char A = 'A';
	char B = 'B';
	char C = 'C';
	printf("请输入第n个圆盘:");
	scanf("%d", &n);
	hanoi(n, A, B, C);
	system("pause");
	return 0;
}
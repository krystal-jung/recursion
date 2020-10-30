#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>
void hanoi(int n, char a, char b, char c){
	if (n == 1){
		printf("��%d��Բ��:%c�ƶ���%c\n", n, a, c);
	}
	else{
		hanoi(n - 1, a, c, b);
		printf("��%d��Բ��:%c�ƶ���%c\n", n, a, c); 
		hanoi(n - 1, b, a, c);
	}
}
int main()
{
	int n;
	char A = 'A';
	char B = 'B';
	char C = 'C';
	printf("�������n��Բ��:");
	scanf("%d", &n);
	hanoi(n, A, B, C);
	system("pause");
	return 0;
}
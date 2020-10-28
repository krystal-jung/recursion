#include <stdio.h>
int strLen(char* str){
	if (str[0] == '\0'){
		return 0;
	}
	else{
		return 1 + strLen(str + 1);
	}
}
int main()
{
	char str[] = "12345";
	int res = strLen(str);
	printf("%d\n", res);
	system("pause");
	return 0;
}
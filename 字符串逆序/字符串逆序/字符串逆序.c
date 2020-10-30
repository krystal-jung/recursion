#include <stdio.h>
int reverse_string(char string[]){
	if (*string == '\0'){
		return 0 ;
	}
	reverse_string(string + 1);
	printf("%c ", *string);

}

int main()
{
	char string[] = "12345";
	reverse_string(string);
	system("pause");
	return 0;
}
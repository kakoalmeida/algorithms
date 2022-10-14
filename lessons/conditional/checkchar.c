/* check if a char is an alphabet letter, digit or special char */

#include <stdio.h>

int main(){

	char ch;

	printf("Input ONE character: \n");
	ch = getchar();

	if ( (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
		printf("Alphabet \n");
	else if (ch >= '0' && ch <= '9')
		printf("Digit \n");
	else
		printf("Special character \n");

	return 0;
}

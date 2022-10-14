/* compare two integers and check if they are equal or not. */

#include <stdio.h>

int main(){

	int x, y;

	printf("Type a number: \n");
	scanf("%d", &x);
	printf("Type another number: \n");
	scanf("%d", &y);

	if (x == y)
		printf("numbers are equals! (%d, %d)\n", x, y);
	else
		printf("not equals! (%d, %d)\n", x, y);

	return 0;

}

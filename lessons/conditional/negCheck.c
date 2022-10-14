/* check if a number is positive or negative */

#include <stdio.h>

int main(){
	
	int number;

	printf("Type a number: \n");
	scanf("%d", &number);

	if ( number >= 0)
		printf("%d is positive \n", number);
	else 
		printf("%d is negative \n", number);

	return 0;


}

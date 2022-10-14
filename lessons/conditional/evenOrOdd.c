#include <stdio.h>

int main(){

	int x;
	float remainder;

	printf("Type a number: ");
	scanf("%d", &x);

	if( x % 2 == 0) printf("\nEven: %d\n", x);
	else {
		remainder = 0;
		remainder = x % 2;	
		printf("Odd: %d\n", x);
		printf("remainder: %.2f\n", remainder);
	
	}
		
	return 0;

}

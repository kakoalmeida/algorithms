/* check whether a triangle can be formed by given value */

#include <stdio.h>

int main(){

	int a, b, c;
	int sum;

	printf("Input the value of three sides \n");
	scanf("%d %d %d", &a, &b, &c);

	sum = (a + b + c);

	if ( sum == 180) printf("\n A valid triangle \n");
	else 
		printf("\n Invalid triangle \n");

	return 0;
}

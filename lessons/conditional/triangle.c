/* chech if a triangle is 
 * equilateral
 * isosceles 
 * or scalene
 */

#include <stdio.h>

int main(){

	int a, b, c;

	printf("input the sides of triangle: \n");
	scanf("%d %d %d", &a, &b, &c);

	if ( a == b && b == c) printf("equilateral \n");
	else if ( a == b || a == c || b == c) printf("isosceles \n");
	else printf("scalene \n");

	return 0;
}

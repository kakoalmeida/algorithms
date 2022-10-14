/* the large number among three number */

#include <stdio.h>

int main (){

	int m, n, x;
	int aux;

	printf("type a number for m: \n");
	scanf("%d", &m);
	printf("type a number for n: \n");
	scanf("%d", &n);
	printf("type a number for x: \n");
	scanf("%d", &x);

	aux = 0;

	if ( m > n && m > x)
		printf("m is the larger: %d\n", m);
	else if ( n > m && n > x)
		printf("n is the larger: %d\n", n);
	else
		printf("x is the larger: %d\n", x);

	return 0;


}

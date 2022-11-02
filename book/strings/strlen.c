#include <stdio.h>

/* Similar strlen function to get the size of strings */

int strsize(char s[]);

int main(){
	char word[] = "banana";
	int size;
	
	size = strsize(word);
	printf("\nSize %d \n", size);

	return 0;
}

int strsize(char s[]){
	int i;
	i = 0;

	while(s[i] != '\0')
		i++;
	return i;
}

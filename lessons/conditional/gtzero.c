/* read an integer and show 1 if the number is > 0 and -1 when is < 0 */

#include <stdio.h>

int main(){

	int m,n;
   	printf("Input the  value of m :");
   	scanf("%d",&m);
   	if(m!=0)
     		if(m>0)
			n=1;
     		else
			n=-1;
   		else
     			n=0;
   
	printf("The value of m = %d \n",m);
   	printf("The value of n = %d \n",n);	

}

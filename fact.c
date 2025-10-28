/*program for the factorial of the given number*/
#include<stdio.h>
int main(){
	int i,fact,n;
	printf("enter the n value:");
	scanf("%d",&n);
	for(i=1,fact=1;i<=n;i++){
		fact=fact*i;
	}
	printf("%d",fact);
	return 0;
}

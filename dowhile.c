/*program for the to print the n natural numbers using do while*/
#include<stdio.h>
int main(){
	int i=0,n;
	printf("enter the n value:");
	scanf("%d",&n);
	do{
	printf("%d\t",i);
	i=i+1;
}
	while(i<=n);
	return 0;
}

/*program for the to print the n natural numbers using for loop*/
#include<stdio.h>
int main()
{
	int i,n;
	printf("enter the n value:");
	scanf("%d",&n);
	for(i=0;i<=n;i++){
		printf("%d\t",i);
	}
}

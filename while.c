/*program for the to print n natural numbers*/
#include<stdio.h>
int main()
{
	int i=1,n;
	printf("enter the n value:");
	scanf("%d",&n);
	while(i<=n){
		printf("%d\t",i);
		i=i+1;
	}
}

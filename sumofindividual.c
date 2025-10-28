/*program for the sum of individual digits*/
#include<stdio.h>
int main()
{
	int sum=0,r,n;
	printf("enter the n value:");
	scanf("%d",&n);
	for(sum=0;n!=0;){
		r=n%10;
		sum=sum+r;
		n=n/10;
	}
	printf("%d",sum);
	return 0;
}

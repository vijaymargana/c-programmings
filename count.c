/*program for the count of the numbers*/
#include<stdio.h>
int main(){
	int count=0,n,m,r;
	printf("enter the n value:");
	scanf("%d",&n);
	m=n;
	for(count=0;n!=0;){
		r=n%10;
		count=count+1;
		n=n/10;
	}
	printf("count of %d is %d",m,count);
	return 0;
}

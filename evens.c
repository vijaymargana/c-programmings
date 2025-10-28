/*program for the sum of n even numbers*/
#include<stdio.h>
int main(){
	int i,n,sum=0;
	printf("enter the n value:");
	scanf("%d",&n);
	for(i=2;i<=n;i=i+2){
		sum=sum+i;
	}
	printf("%d",sum);
}

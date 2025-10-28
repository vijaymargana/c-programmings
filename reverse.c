/*program for the reverse number using for loop*/
#include<stdio.h>
int main(){
	int rev,n,r;
	printf("enter the n value for reverse the number:");
	scanf("%d",&n);
	for(rev=0;n!=0;){
		r=n%10;
		rev=rev*10+r;
		n=n/10;
	}
	printf("reverse is %d",rev);
	return 0;
}

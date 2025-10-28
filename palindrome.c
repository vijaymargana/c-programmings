/*program for the given number is palindrome or not*/
#include<stdio.h>
int main(){
	int n,rev,r,m;
	printf("enter the n value:");
	scanf("%d",&n);
	m=n;
	for(rev=0;n!=0;){
		r=n%10;
		rev=rev*10+r;
		n=n/10;
	}
	if(m==rev){
		printf("given number is palindrome:");
	}
	else{
		printf("given number is not palindrome:");
	}
	return 0;
}

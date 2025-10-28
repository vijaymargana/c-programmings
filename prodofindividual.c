/*program for the individual product of the digits*/
#include<stdio.h>
int main(){
	int pro,n,r;
	printf("enter the n value:");
	scanf("%d",&n);
	for(pro=1;n!=0;){
		r=n%10;
		pro=pro*r;
		n=n/10;
	}
	printf("%d",pro);
	return 0;
}

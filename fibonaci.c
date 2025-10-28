/*program for the display of fibonacci number*/
#include<stdio.h>
int main(){
	int n,i,f1,f2,f3;
	printf("enter the n value:");
	scanf("%d",&n);
	for(i=1,f1=0,f2=1;i<=n;i=i+1){
		printf("%d\t",f1);
		f3=f1+f2;
		f1=f2;
		f2=f3;
	}
	return 0;
}

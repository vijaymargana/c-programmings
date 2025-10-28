/*program for the display all n even numbers*/
#include<stdio.h>
int main(){
	int i,n;
	printf("enter the n value to display n even numbers:");
	scanf("%d",&n);
	for(i=2;i<=n;i=i+2){
		printf("%d\t",i);
	}
}

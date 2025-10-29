/*program for the swapping of the two numbers*/
#include<stdio.h>
int main(){
	int a,b;
	printf("enter the a and b values:");
	scanf("%d%d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("%d\n%d",a,b);
	return 0;
}

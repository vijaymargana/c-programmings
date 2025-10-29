/*program for the average of the two numbers in single line*/
#include<stdio.h>
int main(){
	int a,b;
	float c;
	printf("enter the a and b value:");
	scanf("%d%d",&a,&b);
	c=(a+b)/2.0;
	printf("%.2f",c);
	return 0;
}

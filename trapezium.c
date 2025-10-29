/*program for the area of the trapezium*/
#include<stdio.h>
int main(){
	int b1,b2,h;
	float a;
	printf("enter the b1,b2,h values:");
	scanf("%d%d%d",&b1,&b2,&h);
	a=(b1+b2)*h/2.0;
	printf("%f",a);
	return 0;
}

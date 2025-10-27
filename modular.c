/*program for the modular division*/
#include<stdio.h>
int main()
{
	int a,b;
	float mod;
	printf("enter the two numbers");
	scanf("%d%d",&a,&b);
	mod=a%b;
	printf("modular division is %.2f",mod);
	return 0;
}

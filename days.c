/*pogram for the conversion of days into weeks and years*/
#include<stdio.h>
int main()
{
	int d;
	printf("enter the days:");
	scanf("%d",&d);
	printf("\n weeks are %d",d/7);
	printf("\n years are %d",d/365);
	return 0;
}

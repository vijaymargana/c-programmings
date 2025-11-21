#include<stdio.h>
void add();
void add()
{
	int a,b,sum;
	printf("enter the a and bb value:");
	scanf("%d%d",&a,&b);
	sum=a+b;
	printf("sum=%d",sum);
}
int main(){
	add();
	return 0;
}

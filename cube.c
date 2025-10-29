/*program for the surface area and volume of the cube*/
#include<stdio.h>
int main(){
	int a,s,v;
	printf("enter the a value:");
	scanf("%d",&a);
	s=6*a*a;
	v=a*a*a;
	printf("%d\n%d",s,v);
	return 0;
}

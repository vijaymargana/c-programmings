/*program for the area and perimeter of the circle using radius*/
#include<stdio.h>
#define pi 3.14
int main(){
	int r;
	printf("enter the radius of the circle:");
	scanf("%d",&r);
	printf("%.2f\n%.2f",pi*r*r,2*pi*r);
	return 0;
}

/*program for the volume of the sphere*/
#include<stdio.h>
int main(){
	int r;
	float v;
	printf("enter the radius of the sphere:");
	scanf("%d",&r);
	v=4*3.14*r*r*r/3;
	printf("volume of the sphere is %.4f",v);
	return 0;
}

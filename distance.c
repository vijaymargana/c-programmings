/*program for the calculation of distance between two numbers*/
#include<stdio.h>
#include<math.h>
int main(){
	int x1,x2,y1,y2;
	float d;
	printf("enter the four values:");
	scanf("%d%d%d%d",&x1,&x2,&y1,&y2);
	d=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
	printf("distance between two points is %.2f",d);
	return 0;
}

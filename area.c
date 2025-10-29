/*program for the area of the triangle using heran's formula*/
#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	float s,h;
	printf("enter the a,b and c value:");
	scnaf("%d%d%d",&a,&b,&c);
	s=(a+b+c)/2.0;
	h=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("area of the triangle is %.4f",h);
	return 0;
}


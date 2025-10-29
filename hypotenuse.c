/*program for the hypotenuse of the rectangle triangle*/
#include<stdio.h>
#include<math.h>
int main(){
int a,b;
float h;
printf("enter the a and b value:");
scanf("%d%d",&a,&b);
h=sqrt(a*a+b*b);
printf("hypotenuse of the right angle triangle is %f",h);
return 0;	
}

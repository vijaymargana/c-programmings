/*print speed in meter per second*/
#include<stdio.h>
int main(){
	int s;
	float m;
	printf("enter the speed as s:");
	scanf("%d",&s);
	m=s*5/18.0;
	printf("speed in meter per second is %.2f",m);
	return 0;
}

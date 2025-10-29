/*program for the conversion minutes into hours*/
#include<stdio.h>
int main(){
	int m,h;
	printf("enter the minutes:");
	scanf("%d",&m);
	h=m/60;
	m=m-h*60;
	printf("%d hours(s) %d minutes (s)",h,m);
	return 0;
}

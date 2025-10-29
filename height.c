/*program for the print height in the centi meters*/
#include<stdio.h>
int main(){
	int h;
	printf("enter the height:");
	scanf("%d",&h);
	printf("\n%.2f",h*2.54);
	return 0;
}

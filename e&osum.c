/*program for the even sum and odd sum*/
#include<stdio.h>
int main(){
	int esum,osum,n,i,m;
	printf("enter the n number:");
	scanf("%d",&n);
	for(esum=0,osum=0,i=1;i<=n;i=i+1){
		if(i%2==0)
		esum=esum+i;
		else
		osum=osum+i;
	}
	printf("even sum is %d",esum);
	printf("\nodd sum is %d",osum);
	return 0;
}

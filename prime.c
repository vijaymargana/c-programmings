/*program for the given number is prime or not*/
#include<stdio.h>
int main(){
	int i=2,n,counter=0;
	printf("enter the n value:");
	scanf("%d",&n);
	while(i<n)
	{
		if(n%i==0){
			counter=1;
			break;
		}
		i++;
	}
	if(counter==0){
		printf("the given number is prime:");
	}
	else{
		printf("the given number is not prime:");
	}
	return 0;
}

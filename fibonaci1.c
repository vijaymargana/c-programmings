/*program for the given number is fibonaci number or not*/
#include<stdio.h>
int main(){
	int n,f1,f2,f3;
	printf("enter the n value:");
	scanf("%d",&n);
	for(f1=0,f2=1;n>=f1;){
		if(n==f1){
			printf("YES\n");
			return 0;
		}
		f3=f2+f1;
		f1=f2;
		f2=f3;
	}
	printf("NO");
	return 0;
}

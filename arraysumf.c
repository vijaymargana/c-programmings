#include<stdio.h>
void read(int[],int);
int add(int[],int);
int main(){
	int a[10],sum,n;
	printf("enter the number of elements:");
	scanf("%d",&n);
	read(a,n);
	add(a,n);
	printf("sum=%d\n",sum);
	return 0;
}
void read(int a[],int n){
	int i;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
}
int add(int a[],int n){
	int i,sum=0;
	for(i=0;i<n;i++){
		sum=sum+a[i];
		return sum;
	}
}

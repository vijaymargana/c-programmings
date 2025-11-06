#include<stdio.h>
int main(){
	int i,n,a[10],p;
	printf("enter the number of elements:");
	scanf("%d",&n);
	printf("enter the array elements:");
	for(i=0;i<n;i++){
	scanf("%d",&a[i]);
    }
    printf("\nbefore array elements:");
    for(i=0;i<n;i++){
    	printf("a[%d]=%d",i,a[i]);
    	printf("\n");
	}
	printf("enter the position to delete:");
	scanf("%d",&p);
	for(i=n-1;i>=p;i--){
		if(i==p){
			a[i-1]=a[i];
			n--;
		}
	}
	printf("after delecting array element the elements are:");
	for(i=0;i<n;i++){
		printf("a[%d]=%d",i,a[i]);
		printf("\n");
	}
}

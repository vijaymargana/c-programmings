#include<stdio.h>
int main()
{
	int i,j,n,a[10],temp=0;
	printf("enter the n value:");
	scanf("%d",&n);
	printf("\nenter the array elements:");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(a[i]>a[j]){
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
			}
		}
	}
	printf("\nafter the sorting the elements:");
	for(i=0;i<n;i++){
		printf("\na[%d]=%d",i,a[i]);
	}
	return 0;
}

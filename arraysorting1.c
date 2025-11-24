#include<stdio.h>
int main(){
	int a[10],i,n,temp,min,j;
	printf("enter the n value:");
	scanf("%d",&n);
	printf("enter the array elements:");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("before sorting:");
	for(i=0;i<n;i++){
		printf("\na[%d]=%d",i,a[i]);
	}
	//sorting the elements:
	for(i=0;i<n;i++)
	{
		min=i;
		for(j=i+1;j<n;j++){
			if(a[min]>a[j]){
				min=j;
			}
		}
		if(a[min]<a[i]){
			temp=a[i];
			a[i]=a[min];
			a[min]=temp;
		}
	}
	printf("\nafter the sorting:");
    for(i=0;i<n;i++){
        printf("\na[%d]=%d",i,a[i]);
	}
	return 0;
}

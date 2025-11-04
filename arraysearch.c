/*program for the array searching*/
#include<stdio.h>
int main(){
	int i,low,high,mid,a[10],key,count=0,n;
	printf("enter the number of elements:");
	scanf("%d",&n);
	printf("enter the array elements:");
	for(i=0;i<n;i=i+1)
	scanf("%d",&a[i]);
	printf("enter the element for the searching:");
	scanf("%d",&key);
	low=0;high=n-1;
	while(low<=high){
		mid=(high+low)/2;
		if(mid==a[key])
		{
			count=1;
			break;
		}
		else if(key<a[mid])
		high=mid-1;
		else
		low=mid+1;
	}
	if(count=0){
		printf("%d is not found in the list\n",key);
	}
	else{
		printf("%d is found at %d position:",key,mid+1);
	}
	return 0;
}

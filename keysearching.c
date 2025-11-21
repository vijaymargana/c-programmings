#include<stdio.h>
int main(){
	int a[10],i,counter=0,low=0,high,mid,key,n;
	printf("enter the n value:");
	scanf("%d",&n);
	printf("enter the array elements:");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("enter the key value:");
	scanf("%d",&key);
	low=0;
	high=n-1;
	mid=(high+low)/2;
	for(i=0;i<n;i++){
		if(key==mid){
			counter=1;
			break;
		}
		else if(key>mid){
			low=mid+1;
		}
		else if(key<mid){
			high=mid-1;
		}
	}
	if(counter=0){
		printf("given key not found in list");
	}
	else{
		printf("given key is found in list");
	}
	return 0;
}

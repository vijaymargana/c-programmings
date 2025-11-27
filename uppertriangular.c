#include<stdio.h>
int main()
{
	int a[10][10];
	int i,j,n;
	printf("enter the order:");
	scanf("%d",&n);
	printf("enter the elements of matrix:\n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(i=n;i>n;i--){
		for(j=0;j<n;j++){
			if(a[i][j]!=0){
				printf("Given matrix is not a upper triangular matrix:");
				return 0;
			}
		}
	}
	printf("given matrix is a upper triangular matrix");
	return 0;
}

#include<stdio.h>
int main(){
	int a[10][10],b[10][10],c[10][10],i,j,n1,n2,n3,n4;
	printf("enter the number of rows and columns:");
	scanf("%d%d",&n1,&n2);
	printf("\nenter the martrix one elements:");
	for(i=0;i<n1;i++){
		for(j=0;j<n2;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nenter the number of rows and columns:");
	scanf("%d%d",&n3,&n4);
	printf("\nenter the matrix two elements:");
	for(i=0;i<n3;i++){
		for(j=0;j<n4;j++){
			scanf("%d",&b[i][j]);
		}
	}
	if(a[n1][n2]==b[n3][n4]){
		for(i=0;i<n1;i++){
			for(j=0;j<n2;j++){
				c[i][j]=a[i][j]+b[i][j];
			}
		}
		printf("sum of two matrix is:");
		for(i=0;i<n1;i++){
			for(j=0;j<n2;j++){
				printf("%d\t",c[i][j]);
				printf("\n");
			}
		}
	}
	else{
		printf("addition of two matrix is not possible:");
	}
	return 0;
}

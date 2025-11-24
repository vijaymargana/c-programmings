#include<stdio.h>
int main()
{
	int a[10][10],t[10][10];
	int i,j,r1,c1;
	printf("enter the order:");
	scanf("%d%d",&r1,&c1);
	printf("enter the elements of matrix:\n");
	for(i=0;i<r1;i++){
		for(j=0;j<c1;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<r1;i++){
		for(j=0;j<c1;j++){
			t[i][j]=a[j][i];
		}
	}	
	printf("transpose matrix is:");
	for(i=0;i<r1;i++){
		for(j=0;j<c1;j++){
			printf("%d\t",t[i][j]);
		}
		printf("\n");
	}
	return 0;
}


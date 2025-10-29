/*program for the a single line of input contains an integers year*/
#include<stdio.h>
int main()
{
	int y;
	printf("enter the year:");
	scanf("%d",&y);
	(y%100<10)?printf("%d",y%100):printf("%d",y%100);
	return 0;
}

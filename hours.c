/*program for the conversion of seconds into hours,minutes,seconds*/
#include<stdio.h>
int main()
{
	int s,h,m;
	printf("enter the seconds:",s);
	scanf("%d",&s);
	h=s/3600;
	s=s-h*3600;
	m=s/60;
	s=s-m*60;
	printf("H:M:S-%d:%d:%d",h,m,s);
	return 0;
}

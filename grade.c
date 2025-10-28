/*program for the student grade*/
#include<stdio.h>
int main(){
	int per;
	printf("enter the student percentage:");
	scanf("%d",&per);
	if(per>=90)
	{
		printf("grade o");
	}
	else if(per<90&&per>=80)
	{
		printf("grade A");
	}
	else if(per<80&&per>=70)
	{
		printf("grade B");
	}
	else if(per<70&&per>=60)
	{
		printf("grade C");
	}
	else if(per<60&&per>=50)
	{
		printf("grade D");
	}
	else if(per<50&&per>=40)
	{
		printf("grade pass");
	}
	else
	{
		printf("fail");
	}
}

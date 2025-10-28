/*program for the calculator using switch case*/
#include<stdio.h>
int main()
{
	int a,b;
	char ch;
	printf("enter the a and b value:");
	scanf("%d%d",&a,&b);
	printf("enter the your operation:");
	scanf("%c",&ch);
	switch(ch)
	{
		case '+':printf("%d+%d=%d",a,b,a+b);
				 break;
		case '-':printf("%d-%d=%d",a,b,a-b);
				 break;
		case '*':printf("%d*%d=%d",a,b,a*b);
		         break;
		case '/':if(b!=0){
			     printf("%d/%d=%d",a,b,a/b);
			     }
			     else
			     printf("not possible");
			     break;
		case '%':if(b!=0){
			     printf("%d%%%d=%d",a,b,a%b);
		         }
		         else
		         printf("not possible");
			     break;
		default:printf("unknown operation");		 	     
	}
		return 0;		 		 		 		 
	}


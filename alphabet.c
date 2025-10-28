/*program for the enter character is alphabet or not*/
#include<stdio.h>
int main(){
	char ch;
	printf("enter the a character:");
	scanf("%c",&ch);
	if((ch>='a'&&ch<='z')&&(ch>='A'&&ch<='Z'))
	{
		printf("YES");
	}
	else{
		printf("NO");
	}
	return 0;
}

#include<stdio.h>
int main(){
	char s[10];
	int count=0,i;
	puts("enter the string:");
	gets(s);
	for(i=0;s[i]!=0;i++){
		if(s[i]>='a'&&s[i]<='z'){
			count++;
		}
	}
	printf("count is %d",count);
}

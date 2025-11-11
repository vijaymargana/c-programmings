#include<stdio.h>
int main(){
	int i,cl=0,cu=0;
	char s[30];
	printf("enter the string:");
	gets(s);
	for(i=0;s[i]!='\0';i++){
		if(s[i]>='a'&&s[i]<='z'){
			cl=cl+1;
		}
		else if(s[i]>='A'&&s[i]<='Z'){
			cu=cu+1;
		}
	}
	printf("lower case count in string:%d",cl);
	printf("upper case count in string:%d",cu);
	return 0;
}

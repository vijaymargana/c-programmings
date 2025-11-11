#include<stdio.h>
int main(){
	int i,count=0;
	char s[20];
	puts("enter the string:");
	gets(s);
	for(i=0;s[i]!='\0';i++){
		if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')){
			count=count+1;
		}
	}
	printf("count of alphabet %d",count);
	return 0;
}

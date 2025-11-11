#include<stdio.h>
int main(){
	int i,c1=0,c2=0,c3=0;
	char s[30];
	printf("enter the string:");
	gets(s);
	for(i=0;s[i]!='\0';i++){
		if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')){
			switch(s[i]){
				case 'a':
				case 'A':
				case 'e':
				case 'E':
				case 'i':
				case 'I':
				case 'o':
				case 'O':
				case 'u':
				case 'U':c1=c1+1;
					     break;
				default:c2=c2+1;	     
			}
		}
		else{
			c3=c3+1;
		}
	}
		printf("count of consonants:%d",c2);
		printf("\ncount of vowels:%d",c1);
		printf("\ncount of numbers:%d",c3);
	return 0;
}

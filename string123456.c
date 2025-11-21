#include<stdio.h>
int main()
{
	int i,cl=0,cu=0,cv=0,cc=0,cs=0,cn=0;
	char s[30];
	printf("enter the string:");
	gets(s);
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]>='a'&&s[i]<='z')
		{
		cl=cl+1;
    	}
		else if(s[i]>='A'&&s[i]<='Z')
		{
		
		cu=cu+1;
	    }
		else if(s[i]>='0'&&s[i]<='9')
		{
		
		cn=cn+1;
    	}
		else if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z'))
		{
			switch(s[i])
			{
				case 'a':
				case 'A':
				case 'E':
				case 'e':
				case 'I':
				case 'i':
				case 'o':
				case 'O':
				case 'u':
				case 'U':cv=cv+1;
				         break;
				default:cc=cc+1;		 	
			}
		}
		else
		{
				cs=cs+1;
		}
		
	}
	printf("\ncount of uppercase:%d",cu);
	printf("\ncount of lowercase:%d",cl);
	printf("\ncount of numbers:%d",cn);
	printf("\ncount of vowels:%d",cv);
	printf("\ncount of consonants:%d",cc);
	printf("\ncount of special characters:%d",cs);
	return 0;
}

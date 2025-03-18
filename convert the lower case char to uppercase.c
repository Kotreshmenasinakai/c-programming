#include<stdio.h>
void main()
{
	char s[1000];
	
	printf("Enter the string charecter.\n");
	scanf("%[^\n]", s);
	printf("String Is: %s \n\n", s);

	for(int len=0;s[len];len++,p++);
	for(int i=0;s[i];i++)
	{
		if(s[i] >='a' && s[i] <='z')
		{
			s[i] = s[i]-32;
			printf(" %c  revised as  : %c \n",s[i]+32,s[i] );

		}
	}

	printf("Final Converted string: %s\n",s);
}


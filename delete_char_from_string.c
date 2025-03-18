#include<stdio.h>
void delete_char(char *, const char);
void main()
{
	char s[100] , ch;
	printf("enter the string\n");
	scanf("%[^\n]", s);
	printf("enter the charecter to delete form the string\n");
	scanf(" %c",&ch);
	delete_char(s, ch);
	printf("string after deleteing char : %s\n",s);
}

void delete_char(char *p, const char ch)
{
	while(*p)
	{
		if(*p == ch)
		{
			char *q =p;
			for(int i=0;q[i]; i++)
				q[i] =q[i+1];
		}
		else 
			p++;
	}
}

#include<stdio.h>
void insert_char(char *, const char, const int);
void main()
{
	char s[100] , ch;
	int idx;
	printf("enter the string\n");
	scanf("%[^\n]", s);
	printf("enter the charecter alonge with the index wihich need to be insert\n");
	scanf(" %c %d",&ch,&idx);
	insert_char(s, ch, idx);
	printf("string after inserting the charecter : %s\n",s);
}

void insert_char(char *p, const char ch, const int idx)
{
	int i, len;
	for(len=0;p[len]; len++);

	for(i=0;p[i];i++)
	{
		if(i==idx)
		{       
			while(len>i)
			{
				p[len]=p[len-1];
				len--;
			}
			p[i] = ch;
		}
	}
}

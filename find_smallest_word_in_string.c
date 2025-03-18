#include<stdio.h>
int length(const char *, const char*);
void print_large_word(char *, char*);
void main()
{
	char s[100],*p, *q, *m, *n;
	printf("enter the string\n");
	scanf("%[^\n]",s);
	p=q=m=n=s;
	int len, small=sizeof(s)-1;

	while(*q)
	{
		if(*q == ' '|| *q == '\0')
		{
			q--;
			len=length(p,q);
			if(small >= len)
			{
				small =len;
				m=p;
				n=q;
			}
			p=q+2;
			q++;
		}
		q++;
	}
	q--;
	len=length(p,q);
	if(small >= len)
	{
		small =len;
		m=p;
		n=q;
	}
	print_large_word(m, n);
}


int length(const char *p, const char *q)
{
	int len= q-p;
	return len;
}

void print_large_word(char *m,char *n)
{
	while(m<=n)
		printf("%c", *m++);
	printf("\n");
}

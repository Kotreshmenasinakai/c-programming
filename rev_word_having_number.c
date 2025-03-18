#include<stdio.h>
int length(const char *);
void rev_str
void rev_str_word(char *, char *);
void main()
{
	char s[100],*p, *q, *m, *n;
	printf("enter the string\n");
	scanf("%[^\n]",s);
	int len= length(s);
	p=s;
	q=s;
	while (*q)
	{
		if(*q >= '0' && *q <= '9')
		{  
			m=q;
			n=q;
			while (*m != ' ' && *m != 0)
				m++;
			m--;
			while (n>=p && *n!= ' ')
				n--;
			n++;
			rev_str(n, m);
			q=m+1; 
		}
		q++;
	}
	printf("%s\n",s);
}

void rev_str(char *p, char *q)
{
	char t;
	while(p<q)
	{
		t=*p;
		*p=*q;
		*q=t;
		p++;
		q--;
	}
}

int length(const char *p)
{
	int len;
	for(len =0; p[len] ; len++);
	return len;
}

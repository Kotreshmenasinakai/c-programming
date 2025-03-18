#include<stdio.h>
int length(const char *, const char*);
void rev_word(char *, char*);
void main()
{
	char s[100],*p, *q, *m, *n;
	printf("enter the string\n");
	scanf("%[^\n]",s);
	p=q=m=n=s;
	int len;

	while(*q)
	{
		if(*q == ' ')
		{       
                        q--;
			len=length(p,q);
			if(len>4)
			{
				m=p;
				n=q;
				rev_word(m,n);
			}
			p=q+2;
			q++;
		}
		q++;
	}
        q--;
	len=length(p,q);
	if(len>4)
	{
		m=p;
		n=q;
		rev_word(m,n);
	}
	p=q=m=n=s;

	printf("string After : %s\n",p);
}


int length(const char *p, const char *q)
{
	int len= q-p+1;
	return len;
}

void rev_word(char *m,char *n)
{
	while(m<n)
	{
		char t=*m;
		*m=*n;
		*n=t;
		m++;
		n--;
	}
}

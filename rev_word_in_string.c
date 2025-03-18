#include<stdio.h>
int length(const char *);
void rev_str_word(char *, char *);
void main()
{
	char s[100],*p, *q, *m, *n;
	printf("enter the string\n");
	scanf("%[^\n]",s);
	int len= length(s);
	p=s;
	q=s;
	n=p;
        while(*q)
         {
           if(*q == ' ')
             {
              m=q-1;
              rev_str_word(n, m);
              n=q+1;
             }
           q++;
         }
         rev_str_word(n,q-1);
        printf(" after swaping : %s\n", s);
}


void rev_str_word(char *p, char *q)
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

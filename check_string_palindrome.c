#include<stdio.h>
int  cheak_palindrome(const char *, const char *);
void rev_string(char *);
void main()
{
char s[100], rev[100], *p, *q;
printf("enter the string \n");
scanf("%[^\n]", s);
p=s;
q=rev;
while(*p)
*q++ = *p++;
*q=*p;
p=s;
q=rev;
 
rev_string(rev);

if(cheak_palindrome(s, rev))
 printf("string is palindrome\n");
else
 printf("string not palindrome\n");
}

void rev_string(char *p)
{
	char *q,t;
	int len;
	for(len=0;p[len];len++);
	q=p+len-1;
	while(p<q)
	{
		t=*p;
		*p=*q;
		*q=t;
		p++;
		q--;
	}
}

int  cheak_palindrome(const char *p , const char *q)
{
  while(*p && *q)
{
      if(*p != *q)
         break;
      p++;
      q++;
}
  if(*p == *q)
      return 1;
  else 
      return 0;
}

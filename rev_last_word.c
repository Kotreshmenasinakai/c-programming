#include<stdio.h>
int length(const char *);
void rev_str(char *);
void main()
{
char s[100],*p, *q;
printf("enter the string\n");
scanf("%[^\n]",s);
int len= length(s);
p=s;
q=p+len-1;
while (*q != ' ')
 q--;
q++;
rev_str(q);
printf("%s\n",s);
}


void rev_str(char *p)
{
int len = length(p);
char t;
char *q=p+len-1;
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

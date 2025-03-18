//write a binary of the each charecter of the string.

#include<stdio.h>
void main()
{
char s[100], *p;
int i, pos,j;
printf("enter the string\n");
scanf("%[^\n]", s);

p=s;
for(i=0;p[i];i++)
{
printf("%c --ascii--> %d --binary--> ",p[i], p[i]);
for(pos=31;pos>=0;pos--)
printf("%d", p[i]>>pos &1);
printf("\n");
}

}

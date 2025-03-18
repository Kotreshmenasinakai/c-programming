// scan and print the string with space;

#include<stdio.h>
void main()
{
char s[100], *p;
int i;
printf("enter the string\n");
scanf("%[^\n]", s);

p=s;
for(i=0;p[i];i++)
 printf("%c", p[i]);
printf("\n");

}

#include<stdio.h>
void main()
{
char ch;
unsigned char a;
printf("enter the charecter\n");
scanf("%c",& ch);
ch = ch*2;
a = ch;
printf("ch = %c %d %o %x\v",ch,ch,ch,ch);
printf("a = %c %d %o %x\n", a,a,a,a);
}

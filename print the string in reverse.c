#include<stdio.h>
void main()
{
char s[10];
printf("enter an string:\n");
scanf("%s",s);

printf("%s\n",s);
int len;
for (len=0;s[len];len++);
printf("length = %d\n",len);

for(len; len>=0;len--)
 {
 printf("%c",s[len]);
 printf(" L = %d\n",len);
 }
 printf("\n");

}

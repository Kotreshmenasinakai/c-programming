#include<stdio.h>
void main()
{
char s[30];

printf("Enter the string\n");
scanf("%[^\n]",s);
printf("%s",s);
printf("\n");
for(int i=0;s[i]=='\0';i++)
printf("%c",s[i]);
printf("\n");



}

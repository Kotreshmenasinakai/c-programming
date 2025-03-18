#include<stdio.h>
void main()
{
char s[10],c;
printf("enter an string:\n");
scanf("%s",s);
printf("enter the charecter to be serch.\n");
scanf(" %c",&c);

printf("%s\n",s);

for(int i=0;s[i];i++)
  if(c == s[i])
     {
       printf("charecter is present\n");
       return;
      }
printf("charecter is not present\n");


}

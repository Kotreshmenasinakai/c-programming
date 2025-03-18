#include<stdio.h>
void main()
{
char s[10],ch;
int i,j;

printf("enter the string\n");
scanf("%[^\n]",s);
printf("enter the charecter that you want to delete form the string\n");
scanf(" %c",&ch);

for(i=0;s[i];i++)
 {
  if(s[i] == ch)
   {
     for(j=i;s[j];j++)
       s[j]=s[j+1];
     i--;
   }
   
}

printf("after the deletion of charecter:%s \n",s);
}

// count the digit and sum of the digit in strings.

#include<stdio.h>
void main()
{
char s[30], *p;
int i,count=0;
p=s;
printf("enter the string :\n");
scanf("%[^\n]", s);
int sum=0;
for(i=0; *p ; p++)
  if(*p>='0' && *p<='9')
     {   
         
         sum=sum+(*p-48);
         count++;
     }
printf("count = %d , sum = %d", count,sum);
}

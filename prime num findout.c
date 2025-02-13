#include<stdio.h>
void main()
{
int num, i, c=0, sum=0;

printf("enter the number: ");
scanf("%d",&num);

for(i=1;i<=num;i++)
{
	if(num%i == 0)
		c++;
 
}
if (c == 2)
 printf("PRIME\n");
else
printf("NOT PRIME\n");
}

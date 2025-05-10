#include<stdio.h>
void main()
{
int num, i, c=0, sum=0;

printf("enter the number: ");
scanf("%d",&num);

for(i=1;i<=num;i++)
{
 if(num%i == 0)
 {
 printf("%d ",i);
 sum +=i;
 c++;
 }
}
printf("\nsum of the fcater is:%d\n",sum);
printf("total facters : %d\n",c);
}

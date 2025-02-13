#include<stdio.h>

void main()
{
int num, temp, c=0;

printf("enter the number: ");
scanf("%d",&num);
temp = num;

for ( ;num;num/=10)
    {
	c++;
    }
int d, index=0, sum=0;

for ( ;temp ;temp /=10)
	{
          d = temp%10;
          index ++;
	if(index ==5 || index ==2)
            sum += d;
	}
   printf("\nsum of first and last digit =%d \n",sum);
}

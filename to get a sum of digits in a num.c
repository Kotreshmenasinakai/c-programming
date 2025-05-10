#include<stdio.h>

void main()
{
int num;
printf("enter the num:");
scanf("%d",&num);
int r, sum=0;

for( ;num>0;num=num/10)
{
r=num%10;
sum +=r;
}
printf("\nsum fo the number : %d\n",sum);

}

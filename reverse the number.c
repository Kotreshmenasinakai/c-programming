#include<stdio.h>
void main()
{
int num, d=0;
int temp;
printf("enter the number:");
scanf("%d",&num);
temp = num;
for ( ;num;num/=10)

  { 
	d =(num %10 +d)*10;
  }
  d=d/10;
  printf("num = %d, rev=%d \n", temp, d);
}

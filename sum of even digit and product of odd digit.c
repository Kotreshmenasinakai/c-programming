#include<stdio.h>

void main()
{
int num;
printf("enter the num:");
scanf("%d",&num);
int r, sum=0, mul =1,temp=0;  // multification initialization is 1 think it .

for( ;num>0;num=num/10)
{
r=num%10;
if (r%2 ==0)
sum +=r;
else{
mul *=r;
temp ++;}
}
if(temp==0)
mul = 0;
printf("%d",temp);
printf("\nsum of the even digit in number : %d\n mul of the odd digit in  num :%d\n",sum, mul);

}

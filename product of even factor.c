#include<stdio.h>
void main()
{
int num, i, c=0, sum=0;
int mul =1;
printf("enter the number: ");
scanf("%d",&num);

for(i=1;i<=num;i++)
{
 if(num%i == 0)
 if(i%2 ==0)
 {
 printf("%d ",i);
 mul*=i;
 c++;
 }
}
if(c==0)
mul=0;
printf("\nproduct of even factor :%d\n",mul);
printf("total number of even factor : %d\n",c);
}


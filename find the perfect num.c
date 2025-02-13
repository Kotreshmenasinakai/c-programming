#include<stdio.h>
void main()
{
int num, i, c=0, sum=0;

printf("enter the number: ");
scanf("%d",&num);

for(i=1;i<num;i++)
{
	if(num%i == 0)
	{
	printf("%d ",i);
		sum +=i;
	}
}
printf("\nsum = %d\n",sum);
if(sum == num)
	printf("\nit is a perfect number\n");
else
        printf("not a perfect number\n");
}

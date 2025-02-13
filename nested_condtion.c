#include<stdio.h>
void main()

{
int num1,num2,num3,r;
printf("enter the three numbers:\n");
scanf("%d%d%d", &num1,&num2,&num3);

r = num1>num2 ? num1>num3 ? num1 : num3 : num2>num3 ? num2 : num3 ;

printf("the bgger number is %d\n",r);

}

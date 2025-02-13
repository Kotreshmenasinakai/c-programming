#include<stdio.h>
void main()

{
int num1,num2;
printf("enter the two numbers:\n");
scanf("%d", &num1);
scanf("%d", &num2);

num1>num2 ? printf("num1 is bigger (%d)\n",num1) : printf("num2 is bigger (%d)\n", num2);

}

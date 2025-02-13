#include<stdio.h>

void main()

{
int i , j;
printf("enter the two numbers:\n");
scanf("%d%d", &i,&j);

i == j ? printf("the number are equal\n") : printf("the number are not equal\n");

i ^ j ? printf("the number are not equal\n") : printf("the number are equal\n");


}

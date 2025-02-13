#include<stdio.h>

void main()

{
int i;

printf("enter the one number\n");
scanf("%d",&i);

// i%2 ? printf("the number is odd\n") : printf("the number is even\n"); // using airthmatic number;
i & 1 ? printf("the number is odd\n") : printf("the number is even \n"); // using bitwise oprator ;
}

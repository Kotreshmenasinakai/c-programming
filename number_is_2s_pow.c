#include<stdio.h>

void main()

{
int i;

printf("enter the one number\n");
scanf("%d",&i);

i & i-1 ? printf("not pow of 2\n") : printf("pow of 2\n");

}

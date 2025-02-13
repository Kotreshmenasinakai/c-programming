#include<stdio.h>
void main()

{

int i;
printf("enter the one non zero number\n");
scanf("%d",&i);

// i>>31&1 ? printf("-ve\n") : printf("+ve");   // using the bitwise operator
i>0 ? printf("+ve number\n") : printf("-ve number\n"); // using the relational operator

}



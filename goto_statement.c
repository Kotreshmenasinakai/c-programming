// "goto" statement is the unconditional non itterative statement
// there are two types 1) forword goto.   2)backword goto.

// multification table for the given number.

#include<stdio.h>
void main()

{
int i = 1, num;

printf("enter the number...\n");
scanf("%d", &num);

L:
printf("%d * %d = %d\n",num,i,num*i);


if(i++<=10)
goto L;

}

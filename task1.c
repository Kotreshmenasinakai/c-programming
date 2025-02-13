#include<stdio.h>
void main()

{

char ch;

printf("enter the charecter\n");
scanf("%c",&ch);

ch>>5&1 ? printf(" ch = %c\n", ch-32) : printf("ascii value of char = %d \n",ch);

}

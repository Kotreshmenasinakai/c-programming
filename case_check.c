#include<stdio.h>
void main()

{
char ch ;
printf("enter the charector\n");
scanf("%c",&ch);

ch & 1<<5 ? printf("the char is lower case\n") : printf(" the  char is upper case \n");


}

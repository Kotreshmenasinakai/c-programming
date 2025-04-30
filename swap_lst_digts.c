#include<stdio.h>

void main()

{
int i,j,b,c,d;
printf("enter the 4 digit number\n");
scanf("%d",&i);
b=i%100;
c=(i/100)*100;
d=(b%10)*10;
b=(b/10) +d;
j=c+b;
printf("befor the operation number = %d\n after the operation 	number = %d\n",i,j);

}

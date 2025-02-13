// checking perticular bit in a data if it is set than print bit seted if it is reset than need to set a bit.

// checking for 3th bit in a data i;

#include<stdio.h>
void main()

{

int i;
printf("enter the i value:\n");
scanf("%d", &i);

i>>3&1 ? printf("bit alrady seted\n") :  printf("now bit seted.\n i= %d \n",i| 1<<3);

}

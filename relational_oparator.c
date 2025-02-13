/* programs on relational operator.

> greter than 
< less than 
>= grater then or equal to 
<= lessthen or equal to
== euqual to 
!= not equal to 
*all are binary operator
*these operator can not modify the operands.
*result of the operands are zero(0) or one(1)

*/


#include<stdio.h>
void main()
{

int i=9,j=10,k=9,r=0;
unsigned long int m=-36;
r= i<j+k<=m;
printf("r=%d \n",r);
}

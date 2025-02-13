/* logical operator : to perform the logical operation on the data
      && logical AND     binary     op1 && op2
      || logical OR      binary     op1 || op2
      !  logical NOT     unary      ! op1

cannot modify the operand value and result will be zero(0) or one(1)
 
NOTE : If the leftside operator in the logical AND operator will be 0 compiler doesnt look at right side operand it will dairectly give a answer to '0'. As same as leftside 1 in the OR oprator. 
*/

#include<stdio.h>
void main()

{

int i=20,j=30,k=40,r;
printf("i=%d j=%d k=%d r=%d\n", i,j,k,r);
r= i && (j=200) && (k=400) ||j;
printf("i=%d j=%d k=%d r=%d\n", i,j,k,r);
}

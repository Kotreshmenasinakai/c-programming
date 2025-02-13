// inc and dec (++ and --) are unary oparator.
// these are increment or decrement data by 1.
// these are change the oprand.
// result is based on pre increment/pre decrement( ++ / --{op})  or post increment or psot decrement ({op}++/--).
// in a pre increment the veryfirst tha operand will be incrementd and then any assigning or oparation well be performed.
// in a post increment the first will opration will be performed and than inc or dec will be happened.


#include<stdio.h>
void main()
{
 
int i = 30, r;

printf("r=%d i=%d\n",r,i);
r = 30* i++;
printf("r=%d i=%d\n",r,i);

}

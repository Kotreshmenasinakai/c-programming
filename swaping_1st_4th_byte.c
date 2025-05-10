// Bit masking is the one of the technic it will be help to mask the bit where we won't do the opration on these bit;
//useing the & (bitwise AND) with 0 we can mask the bits where result should not store in same variable.

#include<stdio.h>
void main()

{

unsigned int i= 0x87654321;
unsigned int r1,r2,r3;
printf("i=%x\n",i);
r1= i&0xff000000;
r1= r1>>24;

r2= i&0xff;
r2= r2<<24;

r3= i&0x00ffff00;

i=r1|r2|r3;
printf("i=%x\n",i);
}

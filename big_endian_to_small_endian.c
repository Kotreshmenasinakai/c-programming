#include<stdio.h>

void main()

{
unsigned int i=0x87654321;
unsigned int r1,r2,r3,r4,r5,r6;
printf("i=%x\n",i);

r1 = i&0xff000000;
r1 = r1>>24;

r2 = i&0xff;
r2 = r2<<24;

r3 = i&0x0000ff00;
r3 = r3 <<8;

r4 = i&0x00ff0000;
r4 = r4>>8;

i = r1|r2|r3|r4;

printf("i=%x\n",i);




}

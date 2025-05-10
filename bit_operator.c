// all bitwise operator programs

#include<stdio.h>
void main()
{

int i=5, j=2, k=8,r;
/*
printf("before: i=%d j=%d r=%d\n",i,j,r);
r = i&j;
printf("bitwise and : i=%d j=%d r=%d\n",i,j,r);
r= i|j;
printf("bitwise or: i=%d j=%d r=%d\n",i,j,r);
r=i^j;
printf("bitwise xor: i=%d j=%d r=%d\n",i,j,r);
r=~j;
printf("copliment of j: i=%d j=%d r=%d\n",i,j,r);
r=i<<j;
printf("leftshift: i=%d j=%d r=%d\n",i,j,r);
r=i>>j;
printf("right shift: i=%d j=%d r=%d\n",i,j,r);
*/

///set a bit clear a bit and togal the bit in 1 byte data
printf("enter a number...\n");
scanf("%d",&i);
printf("enter the bit position to set..\n");
scanf("%d",&j);

//r=i|(1<<j); //set the bit ;

// r= i& ~(1<<j);//clear the bit;

r=i^(1<<j);  // togal the bit

printf("after bit set result is %8b  \nor in decimal %d\n",r,r);
}









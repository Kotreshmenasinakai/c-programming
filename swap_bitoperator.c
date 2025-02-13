// swaping the numbers using the bit wise operator

// for swaping the number we use xor (^) operator and using 3 times in a number

 
// consider a = 5     0000 0101        0000 0010        0000 0101
// consider b = 7     0000 0111        0000 0111        0000 0010
//a= a xor b (a^b)    0000 0010        0000 0101        0000 0111 
//

#include<stdio.h>
void main()

{
short int a = -1;
short int b = 5;

printf("BEFORE : a = %d. b = %d\n",a,b);

a = a^b;
b = a^b;
a = a^b;

printf("AFTER : a = %d. b = %d\n",a,b);
}

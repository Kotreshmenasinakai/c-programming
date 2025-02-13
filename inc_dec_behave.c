
#include<stdio.h>
void main()
{
 
 int i = 10;

// printf("%d , %d, %d, %d\n",i++ ,i++, i++, i++); //expected op 13 12 11 10
printf(" %d, %d, %d, %d\n", ++i, ++i, ++i, ++i);  // expected op 14 13 12 11 we got 14 14 14 14if we need real data we use "volatail int i =10;" these data type gives a expected op other wise compailer optimaization happens.
}




// copailer optimaization is a process that compailer make some changes in the executable code , without informing the programer that causes unpridictable in some case. this will make this changes for the saveing the memory and make our code run faster in the processor. 
//using volatile keyworld we can prevent the compailer optimaization.

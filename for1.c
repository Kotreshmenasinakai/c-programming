//in this case the number is grater then zero but it was unsigned so again 0-1is the 4G number will role back so such a case loop never gets end even we use the %d.



#include<stdio.h>
void main()

{
unsigned int i;

for (i=2;i>=0;i--)
printf("i=%d\n",i);

}

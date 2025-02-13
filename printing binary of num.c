#include<stdio.h>
void main()
{
int num, i;

printf("eneter the number:\n");
scanf("%d",&num);

for(int pos=31;pos>=0;pos--)
{ 

printf("%d",(num>>pos)&1);
if(pos%8 == 0)
 printf(" ");
}

printf("\n");

for(int pos=1;pos<=32;pos++)
{ 

printf("%d",(num>>pos)&1);
if(pos%8 == 0)
 printf(" ");
}
}

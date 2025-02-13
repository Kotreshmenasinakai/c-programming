#include<stdio.h>
void main()
{
unsigned int num, i, r,s;

printf("eneter the number, and ratation number\n");
scanf("%d%d",&num, &r);

printf("enter '1' for right side rotate OR '2' for left side rotate\n");
scanf("%d",&s);

for(int pos=31;pos>=0;pos--)
{ 

printf("%d",(num>>pos)&1);
if(pos%8 == 0)
 printf(" ");
}

printf("\n");
/////////////////////////////////////////////////////////////

if(s==1)
{
for(int m=0,i=0 ; i<r ;i++)
{
m=num&1;
num=num>>1;
if(m)
num^=1<<31;
}

}
//// / ///////////////////////////////////////////////////////
if(s==2)
{
for(int j=31, m=0,i=0 ; i<r ;i++)
{
m=num&1<<j;
num=num<<1;
if(m)
num^=1;
j--;
}

}
/////////////////////////////////////////////////////////////

for(int pos=31;pos>=0;pos--)
{ 

printf("%d",(num>>pos)&1);
if(pos%8 == 0)
 printf(" ");

}
printf("\n");

}

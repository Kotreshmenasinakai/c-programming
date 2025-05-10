#include<stdio.h>
void main()
{
int num;

printf("eneter the number:\n");
scanf("%d",&num);
int m,n;
for(int pos = 31 ;pos>=0; pos--)
{
	printf("%d", num>>pos &1);
	if(pos % 8 == 0)
		printf(" ");
}


printf("\n");
printf("%d\n",num);
/*
   for(int i=0,j=31 ; i<j ;i++,j--)
   {
   m = num>>i&1;
   n = num>>j&1;

   if(m!=n)
   {
   num^= 1<<i;
   num^= 1<<j;
   }
   } */


for(int i=0,j=31 ;i<=31 ;i++,j--)
{
	m = num>>i &1;

	if (m)
		num^=1<<j;

}
for(int pos = 31 ;pos>=0; pos--)
{
printf("%d", num>>pos &1);
  if(pos % 8 == 0)
    printf(" ");
}

printf("\n");
printf("%d\n",num);
}

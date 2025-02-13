#include<stdio.h>

void main()

{
int i, pos=31;

printf("enter the number....\n");
scanf("%d",&i);
printf("given number:%d\n",i);
L:
printf("%d", i>>pos&1);
pos--;

if(pos>=0)
goto L;
printf("\n");

}

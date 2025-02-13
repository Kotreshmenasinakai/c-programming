#include<stdio.h>

void main()

{
int i, pos=31;
int bit,c=0;
printf("enter the number....\n");
scanf("%d",&i);
printf("given number:%d\n",i);
L:
bit = i>>pos&1;
printf("%d",bit);
pos--;
if(bit ==1)
c++;

if(pos>=0)
goto L;
printf("\n");
printf("1s bit:%d   0s bit:%d \n",c,32-c);
}

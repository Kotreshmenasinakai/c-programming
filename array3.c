#include<stdio.h>
void main()
{
int a[10],i,j;
int ele=sizeof(a)/sizeof(a[0]);

a[0]=0;
a[1]=1;
//printf("enter the array elements:\n");
for(i=2;i<ele;i++)
     a[i]=a[i-1]+a[i-2];

printf("The arry is :\n ");

for(i=0;i<ele;i++)
        printf("a[%d] = %d\n ",i,a[i]);
    
 printf("\n");
}

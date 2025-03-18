#include<stdio.h>
void main()
{
int a[10],i,j,t;
int ele=sizeof(a)/sizeof(a[0]);

printf("print array:\n");
for(i=0;i<ele;i++)
scanf("%d",&a[i]);

printf("before swaping: ");
for(i=0;i<ele;i++)
printf("%d ",a[i]);
printf("\n");

for(i=0,j=1;i<=ele-1;i+=2,j+=2)
 {
  t=a[i];
  a[i]=a[j];
  a[j]=t;

 }

printf("After swaping: ");
for(i=0;i<ele;i++)
printf("%d ",a[i]);
printf("\n");

}

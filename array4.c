#include<stdio.h>
void main()
{
int a[9],i,L;
int ele=sizeof(a)/sizeof(a[0]);
printf("enter the array :\n");

for(i=0;i<ele;i++)
 scanf("%d", &a[i]);

printf("Array : ");
for(i=0;i<ele;i++)
printf("%d ",a[i]);
printf("\n");

printf("Greater Element in Array : ");

L=a[0];
for(i=1;i<ele;i++)
{
  if(a[i]>L)
    L=a[i];

}
printf("%d",L);
}

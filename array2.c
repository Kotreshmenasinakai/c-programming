#include<stdio.h>
void main()
{
int a[5],i,j;
int ele=sizeof(a)/sizeof(a[0]);
printf("enter the array elements:\n");

for(i=0;i<ele; )
{
scanf("%d",&a[i]);

for(j=2;j<a[i];j++)
  {
    if(a[i]%j==0)
       break;
  }
if(a[i] ==j)
  i++;

}
printf("array is: ");
for(i=0;i<ele;i++)
printf("%d ",a[i]);

}

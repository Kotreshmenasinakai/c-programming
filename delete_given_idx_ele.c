#include<stdio.h>
void main()
{
int a[5], idx, i;
int ele=sizeof(a)/sizeof(a[0]);

printf("enter array element:\n");
for(i=0;i<ele;i++)
scanf("%d",&a[i]);
printf("enter the index to be want delete :\n");
scanf("%d",&idx);

for(i=idx;i<ele-1;i++)
   a[i]=a[i+1];
a[i]='\0';
printf("\nafter deleting the %d th indext element : ",idx);
for(i=0;i<ele;i++)
printf("%d ", a[i]);
printf("\n");

}

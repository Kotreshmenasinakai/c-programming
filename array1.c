#include<stdio.h>
void main()
{
 int a[5],i,j,t;

 printf("enter the array elements\n");
 int ele=sizeof(a)/sizeof(a[0]);

 for(i=0;i<ele;i++)
   scanf("%d", &a[i]);


 printf("before bubble sorting:\n");
  for(i=0;i<ele;i++)
    printf("%d ",a[i]); 
  printf("\n");
////////////////////////////////////

 for(i=0;i<ele-1;i++)
   
     for(j=0;j=ele-1-i;j++)
        {
         if(a[j]>a[j+1])
           {
             t=a[j];
             a[j]=a[j+1];
             a[j+1]=t;
            }

        }
////////////////////////////////////

 printf("after bubble sorting:\n");
  for(i=0;i<ele;i++)
    printf("%d ",a[i]); 
  printf("\n");
}

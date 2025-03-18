#include<stdio.h>
void main()
{
	int a[10], i,j,t,opt;
	int ele=sizeof(a)/sizeof(a[0]);
	printf("enter the array elements\n");
	for(i=0;i<ele;i++)
		scanf("%d", &a[i]);

        printf("ARRAY : ");
        for(i=0;i<ele;i++)
        printf("%d ",a[i]);
        printf("\n");
        printf("select opt to set array:\n 1-for assending order\n 2-for decending order\n");
        scanf("%d",&opt);

	for(i=0;i<ele-1;i++)
	{
		for(j=0;j<ele-1-i;j++)
		{
			switch(opt)
			{
				case 1: 
					if(a[j]>a[j+1])
					{
						t=a[j];
						a[j]=a[j+1];
						a[j+1]=t;
					}
					break;
				case 2:
					if(a[j]<a[j+1])
					{
						t=a[j];
						a[j]=a[j+1];
						a[j+1]=t;                          
					}
					break;
				default: printf("invalid option selection\n");
			}
	        }

	}
       
        printf("AFTER ARRAY : ");
        for(i=0;i<ele;i++)
        printf("%d ",a[i]);
        printf("\n");
}

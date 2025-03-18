#include<stdio.h>
void main()
{
	int a[5];
	int i,j,L,SL;
	int ele=sizeof(a)/sizeof(a[0]);
	printf("enter the array elements\n");
	for(i=0;i<ele;i++)
		scanf("%d",&a[i]);

	if(a[0]>a[1])
	{
		L=a[0];
		SL=a[1];
	}
	else
	{
		SL=a[1];
		L=a[0];
	}

	for(i=2;i<ele;i++)
	{        
                if(a[i]>SL)
                        SL=a[i];
		if(a[i] > L)
		{ 
			SL=L;
            		L=a[i];
		}
	}

	printf("array element is :");
	for(i=0;i<ele;i++)
		printf(" %d",a[i]);
	printf("\n");
	printf("L=%d SL=%d\n",L,SL);

}

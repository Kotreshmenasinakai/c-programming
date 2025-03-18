#include<stdio.h>
void main()
{
	char s[100];
        char ch[26];
        char ch1[26];
        char *p=ch;
        char *p1=ch1;
	printf("Enter the string of 100 charecter.\n");
	scanf("%[^\n]", s);
        int a[26],i,m;
        int a1[26];
        int *n =a;
        int *n1 =a1;
        int elec=sizeof(ch)/sizeof(ch[0]);
        for(i=0,m=97;i<elec;i++)
           *p++ = m++;
        p=ch;
        for(i=0,m=65;i<26;i++)
            *p1++ = m++;
        p1=ch;
       
      //  for(i=0;i<elec;i++)
      //    printf("%c ",*p1++);
      //p=ch;

        int ele=sizeof(a)/sizeof(a[0]);
        for(i=0;i<ele;i++)
          *n++=0;
        n=a;
        for(i=0;i<ele;i++)
          *n1++=0;
        n1=a1;
	printf("String Is: %s \n", s);
        printf("\n");

	int j,len,count;
	for(len=0;s[len];len++)
          {
            for(j=0,p=ch,n=a,p1=ch1,n1=a1;j<ele;j++,n++,n1++)
               {
                 if(s[len] == *p++)
                   {
                    (*n)++;
                    break;
                   }
                 if(s[len] == *p1++)
                   { 
                    (*n1)++;
                    break;
                   }
               }
          }
        p=ch;
        p1=ch1;
        n=a;
        n1=a1;
        for(i=0;i<ele;i++)
        {
         printf("%c = %d \t\t %c = %d \n",*p++,*n++,*p1++,*n1++);
        }

}

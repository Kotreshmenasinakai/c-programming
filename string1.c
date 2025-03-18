#include<stdio.h>
void main()
{
char a[]={'k','o','t','r','e','s','h'};
char s[]="kotresh";

int ele=sizeof(a)/sizeof(a[1]);

for(int i=0 ; i<ele ; i++)
 printf("%c",a[i]);

printf("\n");

printf("%s\n",s);


}

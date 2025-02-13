#include<stdio.h>
int main() 
{
int a = 10;
int b = 20;

printf("before: a= %d, b=%d,\n",a,b);

//using aithmatic * and / oprator //////////////////////
a=a*b;
b=a/b;
a=a/b;

//using aithmatic + and - opratior /////////////////////
/*
a=a+b;
b=a-b;
a=a-b;
*/
///////////////////////////////////////////////////////
printf("after:  a= %d, b=%d,\n",a,b);

}

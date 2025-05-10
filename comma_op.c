// comma (,) is the operator that will be act as a separator or oprator in the c language.
// in the all declaration and function it will be act as a separator
// in the expression it will be act as an oprator.
// while act as an oprator the expression should be solve and in case command on change the variable that variable will change.


#include<stdio.h>
void main()

{
 
int i=2,b=3,c=4,e,f;    //it is declatation in this comma act as an the separator;

printf("i=%d b=%d c=%d e=%d f=%d\n",i,b,c,e,f);   //it is the function comma act as an the separator;

e = (i=5,b<=2,b=b-i,c==4,c>f);    // it is an expression comma act as an oprator,

printf("i=%d b=%d c=%d e=%d f=%d\n",i,b,c,e,f);  // in this case comma is separator

}



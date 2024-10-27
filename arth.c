//Program for Arithematic Operators
#include<stdio.h>
int main()

{
    int a=10,b=20,sum,sub,multi,div,modu;
    printf("The 1st value is=%d\n",a);
    printf("The 2nd value is=%d",b);
    sum=a+b;
    sub=a-b;
    multi=a*b;
    div=b/a;
    modu=b%a;
    printf("\nThe sum=%d",sum);
    printf("\nThe subtraction=%d",sub);
    printf("\nThe Multiply=%d",multi);
    printf("\nThe Division=%d",div);
    printf("\nThe Modulus=%d",modu);
    return 0;
}
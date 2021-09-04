#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c=0;
     
     printf("enter first number\n");
     scanf("%d\n",&a);
     
     printf("enter second number\n");
     scanf("%d\n",&b);
     

     c=a+b;
     a=b;
     b=c-a;

     printf("a is %d and b is %d\n",a,b);


}
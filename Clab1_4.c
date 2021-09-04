#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// WAP to find the roots of a quadratic equation

int main()
{

// taking in the coefficients as inputs
double a,b,c;
printf("\nEnter the coefficients of x^2,x andx^0 \n");
scanf("%lf%lf%lf",&a,&b,&c);

double answer1,answer2;
answer1 = (-b + sqrt((b*b)-4*a*c))/2;
answer2 = (-b - sqrt((b*b)-4*a*c))/2;


printf("\nroots are %f and %f\n",answer1,answer2);

}
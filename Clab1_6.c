#include <stdlib.h>
#include <stdio.h>

// fibonacci series
//0 1 1 2 3 5 8
int main(){

int j=0;
int k=1;
int l=0;


for (int i = 0; i <7; i++)
{
    l=j+k;
    printf(" %i \n",l);
    j=k;
    k=l;
}


}
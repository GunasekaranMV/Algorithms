#include <stdio.h>
#include <stdlib.h>
int i = 5;
int main()
{
    fact(i);
    return 0;
}

int fact(int n)
{
 if(n<1)
    return;
 else
 {
     printf("%d\n",n);
     return n*fact(n-1);
 }
}

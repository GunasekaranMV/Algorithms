#include <stdio.h>
#include <stdlib.h>
int input = 11;
int main()
{
    printf("%d\n",fibnumber(input));
    return 0;
}

int fibnumber(int n)
{
    if(n <= 2)
        return 1;
    else
        return fibnumber(n-1)+ fibnumber(n-2);
}

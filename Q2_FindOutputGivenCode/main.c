#include <stdio.h>
#include <stdlib.h>
void fun(int x)
{
    if(x>0)
    {
    fun(--x);
    printf("%d\t",x);
    fun(--x);
    }
}

int main()
{
    int x=4;
    fun(x);
    getchar();
    return 0;
}

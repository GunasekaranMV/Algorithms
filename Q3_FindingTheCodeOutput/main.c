#include <stdio.h>
#include <stdlib.h>

int function(int a[], int n)
{
    int x;
    if(n==1)
        return a[0];
    else
        x = function(a, n-1);
    if(x> a[n-1])
        return x;
    else
        return a[n-1];
}
int main()
{
    int arr[] = {12, 10, 30, 50, 100};
    printf("%d",function(arr, 5));
    getchar();
    return 0;
}

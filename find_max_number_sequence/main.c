#include <stdio.h>
#include <stdlib.h>

int lis(int array[], int index)
{
    int len = 1;
    int i;
    int max;
    int lis_len;

    if(index < 0)
        return 0;

    for(i = index-1; i>=0; i--)
    {
        lis_len = lis(array, i) + (array[index]>array[i]? 1:0);
        len = (lis_len > len) ? lis_len : len;
    }
    return len;
}

int main()
{
    //int index = 10;
    //int array[] = {10,22,9,33,21,50,41,60,80,70};// {1, 4, 6, 2};
    int index = 4;
    int array[] ={1, 4, 6, 2};
    printf("The max length is %d\n", lis(array, index));
    return 0;
}

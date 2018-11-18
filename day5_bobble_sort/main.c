#include <stdio.h>
#include <stdlib.h>

void bobble_sort(int array[], int index)
{
    int p;
    for(p=0;p<index;p++)
    printf("%d ", array[p]);
    printf("\n");

    int i = 0;
    int j = 0;
    int temp;

    for(i=0;i<index;i++)
    {
        for(j = index-1; j>i; j--)
        {
            if(array[j]<array[j-1])
            {
            temp = array[j];
            array[j] = array[j-1];
            array[j-1] = temp;
            }
        }
    }

    for(p=0;p<index;p++)
    printf("%d ", array[p]);
}

int main()
{
    int index = 7;
    int array [] = {4,6,1,5,8,3,2};
    bobble_sort(array, index);
    return 0;
}

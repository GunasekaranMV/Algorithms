#include <stdio.h>
#include <stdlib.h>

void selection_sort(int array[], int index)
{
    int p;
    for(p=0;p<index;p++)
    printf("%d ", array[p]);
    printf("\n");

    int i = 0;
    int j = 0;
    int temp;
    int smallest;

    for(j=0;j<index-1;j++)
    {
        smallest = j;
        for(i = j+1; i<index ; i++)
        {
            if(array[smallest] > array[i])
             smallest = i;
        }
        temp = array[smallest];
        array[smallest] = array[j];
        array[j] = temp;
    }

    for(p=0;p<index;p++)
    printf("%d ", array[p]);
}

int main()
{
    int index = 7;
    int array [] = {8,4,6,9,2,3,1};
    selection_sort(array, index);
    return 0;
}

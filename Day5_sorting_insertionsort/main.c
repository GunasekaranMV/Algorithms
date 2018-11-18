#include <stdio.h>
#include <stdlib.h>

void insertion_sort(int array[], int index)
{
    int p;
    for(p=0;p<index;p++)
    printf("%d ", array[p]);
    printf("\n");
    int i = 0;
    int j = 0;
    int temp;

    for(j=0;j<index;j++)
    {
        temp = array[j];
        i = j - 1;

        while((i>=0)&&(array[i]>temp))
        {
            array[i+1] = array[i];
            i = i - 1;
            array[i+1] = temp;
        }
    }
    for(p=0;p<index;p++)
    printf("%d ", array[p]);
}

int main()
{
    int index = 7;
    int array [] = {4,6,1,5,8,3,2};
    insertion_sort(array, index);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
int largestnumarray(int array[],int index, int last);

int main()
{
    int array[10] ={23,45,16,1,99,8,55,88,11,77};
    printf("The largest element is %d\n",largestnumarray(array,0,9));
    return 0;
}

int largestnumarray(int array[],int index, int last)
{
    int max;
    if(index >= last)
        return array[index];
    else
        max = largestnumarray(array, index+1,last);

    return (array[index] >= max) ? array[index]: max;
}

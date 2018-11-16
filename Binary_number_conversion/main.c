#include <stdio.h>
#include <stdlib.h>
int length = 4;
int array[length] = "0000";
int binary_combinations(int index, int length, char array[])
{
    if(index >= length)
    {
     printf("%s\n", output);
     return 0;
    }

    binary_combinations(index+1, length, array[]);
    array[i] = 1;
    binary_combinations(index+1, length, array[]);
    array[i] = 0;
}
int main()
{
    printf("%d",binary_number(value));
    return 0;
}

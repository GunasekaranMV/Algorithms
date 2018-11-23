#include <stdio.h>
#include <stdlib.h>
int p;

void closestvalue_to_thenumber(int array[], int index, int thevalue)
{
    int resultleft = 0;
    int resultright = 0;
    int length =1;
    int result = index-1;
    int diff = 1000;

    while(result > length)
    {
        int newDiff = abs(array[length] + array[result]- thevalue);

        if(newDiff < diff)
        {
            resultleft = length;
            resultright = result;
            diff = newDiff;
        }
        if(array[length] + array[result] > thevalue)
            result --;
        else
            length++;

    //printf("The resultLeft is %d and The resultRight is %d\n",resultleft, resultright);
    }
    printf("The resultLeft is %d and The resultRight is %d\n",array[resultleft], array[resultright]);
}

int main()
{
    int thevalue = 16;
    int array [] = {1,2,3,4,7,8,9,10};
    int index = sizeof(array)/sizeof(array[0]);
    for(p=0;p<index;p++)
    printf("%d ", array[p]);
    printf("\n");

    closestvalue_to_thenumber(array, index, thevalue);
    return 0;
}

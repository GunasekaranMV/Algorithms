#include <stdio.h>
#include <stdlib.h>

int LIS(int array[], int n)
{
    // Initializations
    int lis[n];
    int i, j, max = 0;

    // Lis Value assigning
    for (i=0;i<n;i++)
      lis[i] = 1;

    for (i=1;i<n;i++)
    {
      for (j=0;j<i;j++)
      {
        if((array[j] < array[i]) && (lis[j]+1 > lis[i])) //(lis[i] < (lis[j] + 1)))
            lis[i] = lis[j] + 1;
      }
   }

    //getting max value
   for (i=0;i<n;i++)
    {
      if (max < lis[i])
         max = lis[i];
    }
   return max;
}

int main()
{
    int arr[] = {1,2,5, 3, 4};
    int len = sizeof(arr)/sizeof(arr[0]);
    printf("Length of LIS is %d\n", LIS(arr, len));

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int numOfWays(int n)
{
   int m[n+1], i;
   for(i=0; i<=n; i++)
      m[i] = 0;
   m[0] = 1;

   for (i=3; i<=n; i++)
      m[i] += m[i-3];

   for (i=5; i<=n; i++)
      m[i] += m[i-5];

   for (i=10; i<=n; i++)
      m[i] += m[i-10];

   return m[n];
}

int main()
{
    int data;
    printf("Enter the reach point value :");
    scanf("%d", &data);
    printf("Combination way is :%d\n ", numOfWays(data));
    getchar();
    return 0;
}

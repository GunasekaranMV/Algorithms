#include <stdio.h>
#include <stdlib.h>

int number_pattern(int input)
{
    printf("%d ",input);
    if(input <=0)
        return 0;
    else
    {
        number_pattern(input-5);
        printf("%d ",input);
        return 0;
    }
}

int main()
{
    int n;
    printf("Enter the input value:");
    scanf("%d",&n);
    number_pattern(n);
    return 0;
}

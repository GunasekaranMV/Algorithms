#include <stdio.h>
#include <stdlib.h>

void reversestring(char *array)
{
    if(*array)
    {
        reversestring(array+1);
        printf("%c", *array);
    }
}

int main()
{
    reversestring("abcdefghz");
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char strinput[] = "MALAYALAM";
    int result;

    result = isPalindrome(strinput);

    if(result == 1)
    printf("String is polyntrom\n");
    if(result != 1)
    printf("String is Not Polyntrom\n");
    return 0;
}
int isPalindrome(char str[])
{
int n = strlen(str);
if (n == 0)
    return 1;
return isPalRec(str, 0, n - 1);
}

int isPalRec(char str[],int start, int end)
{
    if (start == end)
        return 1;
    if (str[start] != str[end])
        return 0;
    if (start < end + 1)
        return isPalRec(str, start + 1, end - 1);
    return 1;
}

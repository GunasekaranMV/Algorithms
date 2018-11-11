#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int num = 0;
char data[] ="123456";

int theatoifun(char *strng)
{
    int i =0;
    if(strng[i] !='\0')
    {
        num *=10;
        num += strng[i] - '0';
        theatoifun(&strng[i+1]);
    }
    return num;
}

int main()
{
    printf("Input Data is %d\n",theatoifun(data));
    return 0;
}

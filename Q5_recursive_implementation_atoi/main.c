#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int num = 0;
char data[] ="112";

int atoifunc(char *strng)
{
    int index =0;
    if(strng[index] !='\0')
    {
        num *=10;
        num += strng[index] - '0';
        atoifunc(&strng[index+1]);
    }
    return num;
}

int main()
{
    printf("Input Data is %d\n",atoifunc(data));
    return 0;
}

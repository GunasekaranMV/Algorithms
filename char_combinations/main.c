#include <stdio.h>
#include <stdlib.h>

int char_combinations(char chararray[], int index, int length, char array)
{
    int i;

    if(index >= length)
    {
     printf("%s\n", output);
     return 0;
    }

    for(i=0;i<length;i++)
    {
     output[index] = array[i];
     char_combinations(chararray,index+1,length, array)
    }

   return 0;
}

int main()
{
    int length = 2;
    char data[] = "abcd";
    //char[] input =
    char_combinations();
    return 0;
}

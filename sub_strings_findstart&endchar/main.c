#include <stdio.h>
#include <stdlib.h>

int num;
int length = 5;
char data[5] = "abcab";
int index;


int main()
{
    printf("The substrings value is %d\n",find_num(data,index,length));
    return 0;
}

int find_num(char array[], int index, int length)
{
 int i;
 int count = 0;
 if(index > length)
    return 0;

 count = 0;

 for(i=index; i<length; i++)
    count += (array[index] == array[i]) ? 1 : 0;
 return count + find_num(array, index+1,length);
}



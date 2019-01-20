#include <stdio.h>
#include <stdlib.h>

int lcs_recursive( char *str1, char *str2, int str1_len, int str2_len )
{
   if (str1_len == 0 || str2_len == 0)
     return 0;
   if (str1[str1_len-1] == str2[str2_len-1])
     return 1 + lcs_recursive(str1, str2, str1_len-1, str2_len-1);
   else
     return max(lcs_recursive(str1, str2, str1_len, str2_len-1), lcs_recursive(str1, str2, str1_len-1, str2_len));
}


/*int lcs_fn( char *str1,char *str2,int str1_len,int str2_len )
{
   int Lenght[str1_len+1][str2_len+1];
   int i, j;

   for (i=0; i<=str1_len; i++)
   {
     for (j=0; j<=str2_len; j++)
     {
       if (i == 0 || j == 0)
         Lenght[i][j] = 0;

       else if (str1[i-1] == str2[j-1])
         Lenght[i][j] = Lenght[i-1][j-1] + 1;

       else
         Lenght[i][j] = max(Lenght[i-1][j], Lenght[i][j-1]);
     }
   }
   return Lenght[str1_len][str2_len];
}*/

int max(int a, int b)
{
    return (a > b)? a : b;
}


int main()
{
  char str1[] = "abbcd";
  char str2[] = "abcde";
  int str1_len = strlen(str1);
  int str2_len = strlen(str2);

  printf("The length of LCS_Recursive is %d\n", lcs_recursive( str1, str2, str1_len, str2_len ) );
  //printf("The length of LCS_Dynamic is %d\n", lcs_fn( str1, str2, str1_len, str2_len ) );

  return 0;
}

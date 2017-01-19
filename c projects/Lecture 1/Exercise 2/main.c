#include <stdio.h>
#include <string.h>

int main ()
{
   char str1[15];
   char str2[15];
   int  compareResult;

    printf("Enter 2 strings\n");

    printf("String 1 : ");
    scanf("%s", str1);
    printf("String 2 : ");
    scanf("%s", str2);

   compareResult = strcmp(str1, str2); // strcmp returns 0 if strings are equal , negative if one is bigger and positive integer if other is bigger .

   if(compareResult > 0)
   {
      printf("\n%s > %s",str1, str2);
   }
   else if(compareResult < 0)
   {
      printf("\n%s < %s",str1, str2);
   }
   else
   {
      printf(" %s = %s", str1,str2);
   }

   return(0);
}

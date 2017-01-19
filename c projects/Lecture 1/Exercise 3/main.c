#include <stdio.h>
#include <string.h>
int main()
{
    char a[20]="Program"; //Valte ena string opio thelete ston prwto pinaka
    char b[20];

    printf("Enter string: ");
    gets(b);

    //calculates the length of string before null charcter.
    printf("Length of string a = %d \n",strlen(a));
    printf("Length of string b = %d \n",strlen(b));

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

extern int errno ;

float divide(float num1,float num2);
int main()
{
    float number1;
    float number2;
    float divisionResult;

    printf("give num1");
    scanf(" %e\n",&number1);
    printf("give num2");
    scanf(" %e", &number2);

    divisionResult = divide(number1,number2);
    printf("division result = %f", divisionResult);

    return 0;
}

float divide(float num1,float num2, ) {
    float result;
    result = num1/num2;
    return result;
}

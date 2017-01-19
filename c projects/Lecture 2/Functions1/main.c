#include <stdio.h>
#include <errno.h>

extern int errno ;

/* function declaration */
float findMax(float num1, float num2);
float add(float no1, float no2);
float divide(float noumero1, float noumero2);
float subtract(float, float);

int main () {

   /* local variable declaration */
   float number1;
   float number2;
   float maxResult;
   float divisionResult;

    printf("Give 2 numbers\n");
    printf("Number 1: ");
    scanf("%f", &number1);
    printf("Number 2: ");
    scanf("%f",&number2);

   maxResult = findMax(number1, number2);

   printf( "Biggest number : %f\n", maxResult );
   printf("----------------------\n");
   printf( "Number 1 + Number 2 = %f\n", add(number1, number2) );
   printf( "Number 1  - Number 2 = %f\n", subtract(number1, number2) );
   printf( "Number 1  / Number 2 = %f\n", divide(number1, number2) );

   printf("----------------------\n");

   return 0;
}

/* function definition */
float findMax(float num1, float num2) {
   /* local variable declaration */
   float result;

   if (num1 > num2)
      result = num1;
   else
      result = num2;

   return result;
}

float add(float no1, float no2) {
    return no1 + no2;
}


float divide(float num1,float num2) {
    float result;
/*
    if(num2 ==0){
        errno = 5;
        printf("--------------------\n");
        fprintf(stderr, "Division by 0 is not permitted: %s\n", strerror( errno ));
        exit(-1);

   }
   */

    result = num1/num2;
    return result;
}

float subtract(float nombre1, float nombre2) {
    return nombre1 - nombre2;
}




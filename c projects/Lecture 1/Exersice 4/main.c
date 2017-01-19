#include <stdio.h>//explain the problem first . Thelw ena programma pou na mou zita ena arithmo kai na ipologizei to athroisma twn proigoumenwn tou .
int main()
{
    int num, count, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    for(count = 1; count <= num; ++count)
    {
        sum = sum + count;  //sum +=count
    }

    printf("Sum = %d", sum);

    return 0;
}

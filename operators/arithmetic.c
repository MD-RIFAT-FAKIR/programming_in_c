#include <stdio.h>

int main()
{

    int num1, num2;

    printf("enter number1: ");
    scanf("%d", &num1);
    printf("enter number2 : ");
    scanf("%d", &num2);

    int result1         = num1 + num2;//addition
    int result2         = num1 - num2;//subtraction
    long int result3    = num1 * num2;//multiplication
    double result4      = (double)num1 / num2;//division
    int restult5        = num2 % num1;//modulus

    printf("result1 = %d\n", result1);
    printf("result2 = %d\n", result2);
    printf("result3 = %ld\n", result3);
    printf("result4 = %.2lf\n", result4);
    printf("result5 = %d\n", restult5);


    return 0;
}
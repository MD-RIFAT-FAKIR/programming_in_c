#include<stdio.h>

int main()
{
    int number;

    printf("Enter a Number: ");
    scanf("%d", &number);

    int sum = 0;

    for(int i=1; i<=number; i++){
        sum+=i;
    }

    printf("summation of all ditits from 1 to %d is %d", number, sum);

    return 0;
}
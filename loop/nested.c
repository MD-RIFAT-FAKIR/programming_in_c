#include<stdio.h>

int main()
{
    int number;

    printf("Enter a Number: ");
    scanf("%d", &number);

    for(int i=1; i<=number/2; i++){
        for(int j=1; j<=number; j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
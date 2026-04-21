#include<stdio.h>

int main()
{
    int number;

    printf("Enter a Number: ");
    scanf("%d", &number);

    int i = 1;

    do{
        printf("%d hello world!\n", i);
        i++;
    }while (i<=number);
    
    return 0;
}
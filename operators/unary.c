#include<stdio.h>

int main()
{
    int num;

    printf("Enter a Number: ");
    scanf("%d", &num);

    ++num;
    printf("%d\n", num);

    --num;
    printf("%d\n", num);

    num++;
    printf("%d\n", num);

    num--;
    printf("%d\n", num);

    return 0;
}
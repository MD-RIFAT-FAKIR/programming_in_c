#include<stdio.h>

int main()
{
    int number;
    printf("Enter a number : ");
    scanf("%d",&number);

    int i = 1;
    while (i<=number)
    {
        printf("%d hello world!\n",i);
        i++;
    }

    return 0;
}
#include<stdio.h>

int main()
{
    int amount;

    printf("how much money you have for buing candy : ");
    scanf("%d", &amount);

    int money_back;

    if(amount>=5 && amount<10)
    {
        money_back = amount-5;
        printf("you will get 1 candy and get %d tk back!", money_back);
    }
    else if(amount>=10 && amount<15)
    {
        money_back = amount-10;
        printf("you will get 2 candy and get %d tk back!", money_back);
    }
    else if(amount>15 && amount<20)
    {
        money_back = amount - 15;
        printf("you will get 3 candy and get %d tk back!", money_back);
    }
    else
    {
        printf("Invalid!!");
    }

    return 0;
}
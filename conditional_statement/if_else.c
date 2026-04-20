#include<stdio.h>

int main()
{
    int price;

    printf("Enter price of product: ");
    scanf("%d", &price);

    if(price>=1000){
        printf("get 100 tk off !!\n");
        int final_price = price - 100;
        printf("final price is %d tk only!!", final_price);
    }
    else{
        printf("pay %d tk only!", price);
    }

    return 0;
}
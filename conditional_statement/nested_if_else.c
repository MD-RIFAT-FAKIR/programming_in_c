#include<stdio.h>
#include<stdbool.h>

int main()
{
    int age;

    printf("Enter yoru age: ");
    scanf("%d", &age);

    if(age>= 18)
    {
        bool isNIDavailable;

        printf("Doy you have NID? (if yes) press 1 (if no) press 0\n");
        scanf("%d", &isNIDavailable);

        if (isNIDavailable)
        {
            printf("yorre are adult and eligable for vote..!");
        }
        else
        {
            printf("yor are adult but not eligable for vote..!");
        }
    }
    else
    {
        if(age>12)
        {
            printf("yore are child..!");
        }
        else
        {
            printf("yor are baby..!");
        }
    }

    return 0;
}
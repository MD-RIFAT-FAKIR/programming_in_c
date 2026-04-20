#include<stdio.h>

int main()
{
    int day;

    printf("Enter number for days of week: ");
    scanf("%d", &day);

    switch (day)
    {
        case 1:
            printf("saturday.");
            break;
        case 2:
            printf("sunday.");
            break;
        case 3:
            printf("monday");
            break;
        case 4:
            printf("tuesday");
            break;
        case 5:
            printf("wednesday");
            break;
        case 6:
            printf("thrusday");
            break;
        case 7:
            printf("friday");
            break;
        default:
            printf("wrong day..!!!"); 
    }

    return 0;
}
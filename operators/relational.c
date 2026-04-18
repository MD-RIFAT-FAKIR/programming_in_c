#include<stdio.h>
#include<stdbool.h>

int main()
{
    int a = 5; int b = 3;

    bool flag1 = a==b;
    bool flag2 = a>b;
    bool flag3 = a<b;
    bool flag4 = a>=b;
    bool flag5 = a<=b;
    bool flag6 = a != b;

    printf("flag1 = %d\n", flag1);
    printf("flag2 = %d\n", flag2);
    printf("flag3 = %d\n", flag3);
    printf("flag4 = %d\n", flag4);
    printf("flag5 = %d\n", flag5);
    printf("flag6 = %d", flag6);
    
    return 0;
}
#include<stdio.h>
#include<stdbool.h>

int main()
{
    bool res1 = (5>3) && (6>10);//false
    printf("result1 = %d\n", res1);

    bool res2 = (10>20) || (10<20);
    printf("result2 = %d\n", res2);//true

    bool res3 = !((80<=80) && (90>=90));//false
    printf("result3 = %d", res3);

    return 0;
}
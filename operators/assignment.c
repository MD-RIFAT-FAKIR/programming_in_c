#include<stdio.h>

int main()
{
    int a;

    int res1, res2, res3, res4;

    printf("Enter a number");
    scanf("%d", &a);

    a+=10;
    res1=a;

    res1-=10;
    res2=res1;

    res2*=10;
    res3=res2;

    res3/=10;
    res4=res3;



    printf("%d %d %d %d", res1, res2, res3, res4);

    return 0;
    
}
#include<stdio.h>

int main()
{
    int number;
    printf("Enter a number : ");
    scanf("%d",&number);
    
    for(int i=1; i<=number; i++)
    {
        printf("%d hello world!\n",i);
    }
    
    return 0;
}
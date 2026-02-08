#include <stdio.h>

int main()
{
    int a;
    float b;
    double c;
    char d;

    //take input 
    scanf("%d %f %lf %c", &a, &b, &c, &d);


    //print output
    printf("a = %d\n",a);
    printf("b = %.1f\n",b);
    printf("c = %.4f\n",c);
    printf("d = %c\n",d);


    return 0;


}

/*
Format Specifier

short int %hd
int %d
lont int %ld
long long int %lld

float %f
double %.1f
long double %Lf

unsigned int %u
unsigned short int %hu

char %c


*/
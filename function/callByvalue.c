#include<stdio.h>

int changeValue(int x) {
    x = x + 10;

    printf("%d\n", x);

    return x;
}

int main() {

    int num = 10;

    changeValue(num);//call by value

    printf("%d\n", num);

    return 0;
}
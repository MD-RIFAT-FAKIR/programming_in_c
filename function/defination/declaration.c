#include<stdio.h>
            //parameter list//
int sum (int firstNum, int secondNum); //function declaratin

//function difination
int sum(int firstNum, int secondNum) {
    return firstNum + secondNum;
}

//retun type    function name
int               main           () {
    int a = 3, b = 4;

    int result = sum(a, b);//call functionn
    printf("%d", result);

    return 0;
}

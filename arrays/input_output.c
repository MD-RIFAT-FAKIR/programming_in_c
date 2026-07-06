#include<stdio.h>

int main() {

    //taking the size of array
    int size;
    printf("Enter the size of array : ");
    scanf("%d", &size);

    int arr[size];//declare array

    //taking user input for array's element
    printf("Enter elements for array : ");
    for(int i=0; i<size; i++) {
        scanf("%d", &arr[i]);
    }

    //printing output of array
    for(int i=0; i<size; i++) {
        printf("%d\n", arr[i]);
    }


    return 0;
}
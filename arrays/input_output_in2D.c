#include<stdio.h>

int main() {

    int row,column;

    //taking input for row
    printf("Enter the number of row : ");
    scanf("%d", &row);

    //taking input for column
    printf("Enter the number of column : ");
    scanf("%d", &column);

    //declaring arr with the size of row and column
    int arr[row][column];

    //taking input
    for(int i=0; i<row; i++) {//outer loop reprsent the row
        for(int j=0; j<column; j++) {//inner loop represent the column
            printf("Enter element for %d row and %d coumn : \n", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    //printing the array
    for(int i=0; i<row; i++) {
        for(int j=0; j<column; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n"); //new line after every row
    }

    return 0;
}
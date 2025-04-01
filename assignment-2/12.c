/*
Question:
    Write a program in C for a 2D array of size 2x3 and print the matrix.
*/

#include<stdio.h>
int main(){
    int n, mat[100][100]={0}, rows, cols;
    printf("Enter the number of rows and columns(row column): ");
    scanf("%d %d", &rows, &cols);
    printf("Enter the Matrix elements(%dx%d): \n", rows, cols);
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            scanf("%d", &mat[i][j]);
        }
    }
    printf("Matrix elements are: \n");
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}

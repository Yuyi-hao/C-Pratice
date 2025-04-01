/*
Question:
    Write a program in C for a 2D array of size 2x3 and print the matrix.
*/

#include<stdio.h>
int main(){
    int n, mat[2][3]={0};
    printf("Enter the Matrix elements(2x3): \n");
    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
            scanf("%d", &mat[i][j]);
        }
    }
    printf("Matrix elements are: \n");
    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}

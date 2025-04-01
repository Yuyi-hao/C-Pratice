/*
Question:
    To perform matrix addition,
*/

#include<stdio.h>
int main(){
    int n, matA[100][100]={0}, matB[100][100]={0}, rowsA, colsA, rowsB, colsB;
    int matSum[100][100];
    printf("Enter the number of rows and columns of matrix A(row column): ");
    scanf("%d %d", &rowsA, &colsA);
    printf("Enter the Matrix A elements(%dx%d): \n", rowsA, colsA);
    for(int i=0; i<rowsA; i++){
        for(int j=0; j<colsA; j++){
            scanf("%d", &matA[i][j]);
        }
    }
    printf("Enter the number of rows and columns of matrix B(row column): ");
    scanf("%d %d", &rowsB, &colsB);
    printf("Enter the Matrix B elements(%dx%d): \n", rowsB, colsB);
    for(int i=0; i<rowsB; i++){
        for(int j=0; j<colsB; j++){
            scanf("%d", &matB[i][j]);
        }
    }
    if(rowsA == rowsB && colsA==colsB){
        for(int i=0; i<rowsB; i++){
            for(int j=0; j<colsB; j++){
                matSum[i][j] = matA[i][j]+matB[i][j];
            }
        }
        printf("Sum of matrix is: \n");
        for(int i=0; i<rowsA; i++){
            for(int j=0; j<colsA; j++){
                printf("%d ", matSum[i][j]);
            }
            printf("\n");
        }
    }
    else{
        printf("Matrix addition not possible both have different dimensions\n");
        printf("Matrix A: %dx%d\n", rowsA, colsA);
        printf("Matrix B: %dx%d\n", rowsB, colsB);
    }
    return 0;
}

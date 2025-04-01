/*
Question:
    To copy the elements of one array into another array.
*/

#include<stdio.h>
int main(){
    int n, arrA[100]={0}, arrB[100]={0};
    printf("Enter the number of elements(<100): ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for(int i=0; i<n; i++){
        scanf("%d", arrA+i);
    }
    // copy elements from arrA to arrB
    for(int i = 0; i<n; i++){
        arrB[i] = arrA[i];
    }
    printf("Elements in array A are: ");
    for(int i = 0; i<n; i++){
        printf("%d ", arrA[i]);
    }
    printf("\n");
    printf("Elements in array B are: ");
    for(int i = 0; i<n; i++){
        printf("%d ", arrB[i]);
    }
    printf("\n");
    return 0;
}

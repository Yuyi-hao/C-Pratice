/*
Question:
    To read n number of values in an array and display them in reverse order.
*/

#include<stdio.h>
int main(){
    int n, arr[100]={0};
    printf("Enter the number of elements(<100): ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for(int i=0; i<n; i++){
        scanf("%d", arr+i);
    }
    printf("Elements in array are: ");
    for(int i = n-1; i>=0; i--){ // iterate from last element
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}

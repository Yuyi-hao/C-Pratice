/*
Question:
    To sort elements of an array in descending order.
*/

#include<stdio.h>
int main(){
    int n, temp, arr[100]={0}, isPresent=0;
    printf("Enter the number of elements(<100): ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for(int i=0; i<n; i++){
        scanf("%d", arr+i);
    }
    printf("Elements before sorting: ");
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    // using bubble sort descending order.
    for(int i=0; i < n; i++){
        for(int j=i+1; j < n; j++){
            if(arr[i] < arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp; 
            }
        }
    }
    printf("Elements after sorting: ");
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");    
    
    return 0;
}

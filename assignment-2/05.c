/*
Question:
    To search for an element in array.
*/

#include<stdio.h>
int main(){
    int n, key, arr[100]={0}, isPresent=0;
    printf("Enter the number of elements(<100): ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for(int i=0; i<n; i++){
        scanf("%d", arr+i);
    }
    printf("Elements to search: ");
    scanf("%d", &key);
    for(int i=0; i<n; i++){
        if(arr[i] == key){
            printf("Element[%d] found at index: %d\n", key, i+1);
            isPresent=1;
            break;
        }
    }
    if(isPresent==0){
        printf("Target element %d not present in array\n", key);
    }
    return 0;
}

/*
Question:
    To display the position of an element in the array.
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
            printf("Element[%d] present at position: %d\n", key, i);
            isPresent=1;
            break;
        }
    }
    if(isPresent==0){
        printf("Target element %d not present in array\n", key);
    }
    return 0;
}

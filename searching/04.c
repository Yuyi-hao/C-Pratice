#include <stdio.h>
int binarySearchRecursive(int arr[], int low, int high, int key){
    if(high < low){
        return -1;
    }
    int mid = (low+high)/2;
    if(arr[mid] == key){
        return mid;
    }
    else if(arr[mid] > key){
        return binarySearchRecursive(arr, low, mid-1, key);
    }
    return binarySearchRecursive(arr, mid+1, high, key);
}
int main(){
    int arr[100], key, size;
    printf("Enter the number of elements: ");
    scanf("%d", &size);
    printf("Enter the elements values in ascending order: ");
    for(int i=0; i<size; i++){
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to be searched: ");
    scanf("%d", &key);
    int found = binarySearchRecursive(arr, 0, size-1, key);
    if(found >= 0){
        printf("Element found at index: %d\n", found);
    }else{
        printf("Element not found.\n");
    }
    return 0;
}
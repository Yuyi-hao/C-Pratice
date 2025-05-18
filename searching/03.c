#include <stdio.h>
int binarySearch(int arr[], int size, int key){
    int low=0, high=size-1, mid;
    while(low <= high){
        mid = (low+high)/2;
        if(arr[mid] == key){
            return mid;
        }
        else if(arr[mid] > key){
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    return -1;
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
    int found = binarySearch(arr, size, key);
    if(found >= 0){
        printf("Element found at index: %d\n", found);
    }else{
        printf("Element not found.\n");
    }
    return 0;
}
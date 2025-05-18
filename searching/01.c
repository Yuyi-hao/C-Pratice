#include <stdio.h>
int linearSearchUnsorted(int arr[], int size, int key){
    for(int i=0; i<size; i++){
        if(arr[i] == key){
            return i;
        }
    }
    return -1;
}
int main(){
    int arr[100], key, size;
    printf("Enter the number of elements: ");
    scanf("%d", &size);
    printf("Enter the elements Values: ");
    for(int i=0; i<size; i++){
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to be searched: ");
    scanf("%d", &key);
    int found = linearSearchUnsorted(arr, size, key);
    if(found >= 0){
        printf("Element found at index: %d\n", found);
    }else{
        printf("Element not found.\n");
    }
    return 0;
}
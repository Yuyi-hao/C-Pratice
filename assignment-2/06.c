/*
Question:
    To count the frequency of an element in the array.
*/

#include<stdio.h>
int main(){
    int n, key, arr[100]={0}, freq=0;
    printf("Enter the number of elements(<100): ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for(int i=0; i<n; i++){
        scanf("%d", arr+i);
    }
    printf("Element to count frequency: ");
    scanf("%d", &key);
    for(int i=0; i<n; i++){
        if(arr[i] == key){
            freq += 1;
        }
    }
    printf("Frequency of %d is: %d\n", key, freq);
    return 0;
}

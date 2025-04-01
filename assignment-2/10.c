/*
Question:
    To find the maximum and minimum value among the elements in an array.
*/

#include<stdio.h>
int main(){
    int n, key, arr[100]={0}, maxValue, minValue;
    printf("Enter the number of elements(<100): ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for(int i=0; i<n; i++){
        scanf("%d", arr+i);
    }
    maxValue = arr[0];
    minValue = arr[0];
    for(int i=0; i<n; i++){
        maxValue = maxValue>arr[i]?arr[i]:maxValue;
        minValue = minValue<arr[i]?arr[i]:minValue;
    }
    printf("Maximum value: %d\n", maxValue);
    printf("Minimum value: %d\n", minValue);
    
    return 0;
}

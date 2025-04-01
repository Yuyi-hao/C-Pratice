/*
Question:
    To find the sum and average of all elements of the array.
*/

#include<stdio.h>
int main(){
    int n, arr[100]={0};
    int sum = 0;
    float average;
    printf("Enter the number of elements(<100): ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for(int i=0; i<n; i++){
        scanf("%d", arr+i);
        sum += arr[i]; // calculate sum
    }
    if(n != 0){
        average = (float)sum/(float)n;
    }else{
        average = 0.0;
    }
    printf("Sum of elements is: %d\n", sum);
    printf("Average of elements is: %0.2f\n", average);
    return 0;
}

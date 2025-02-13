/*
Question:
    Take 5 integers as input and print sum and average as output.
*/
#include <stdio.h>
int main(){
    int num_of_inputs = 5, i;
    int nums[num_of_inputs] = {0};
    
    for(i=0; i<num_of_inputs; i++){
        scanf("%d", nums[i]);
    }

    // find total of nums
    int total = 0;
    for(i=0; i<num_of_inputs; i++){
        total += nums[i];
    }
    printf("Sum of all numbers: %d\n", total);
    
    // find average of nums
    float average = total/num_of_inputs;
    printf("Average of all numbers: %0.2f\n", average);

    return 0;
}
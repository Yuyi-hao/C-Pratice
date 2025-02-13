/*
Question:
    Take 2 integer as input and print all even numbers between those. Inclusive of the inputs.
*/
#include <stdio.h>
int main(){
    int low, high;
    scanf("%d %d", &low, &high);
    printf("Even number between %d and %d are:\n", low, high);
    for(int i=low; i<= high; i++){
        if(i%2==0){
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}
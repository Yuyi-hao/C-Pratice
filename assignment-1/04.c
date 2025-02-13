/*
Question:
    Generate and show as output event numbers between 10 and 100.
*/
#include <stdio.h>
int main(){
    int low=10, high=100;
    printf("Even number between %d and %d are:\n", low, high);
    for(int i=low; i<= high; i++){
        if(i%2==0){
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}
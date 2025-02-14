/*
Question:
    Take any number as input. Find and print the factorial of number.
*/
#include <stdio.h>
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int factorial = 1;
    int temp = num;
    while(temp){
        factorial *= temp;
        temp--;
    }
    printf("The factorial of %d is %lld\n", num, factorial);
    return 0;
}
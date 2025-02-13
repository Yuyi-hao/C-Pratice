/*
Question:
    Take 2 integer numbers as input and print the larger of two numbers as output.
*/
#include <stdio.h>

int main(){
    int a, b;
    scanf("%d %d", &a, &b);

    // use either one or two
    // 1. using ternary operator
    printf("Larger of %d and %d is %d\n", a, b, a>b?a:b);
    
    // 2. using if else 
    printf("Larger of %d and %d is ", a, b);
    if(a>b){
        printf("%d\n", a);
    }
    else{
        printf("%d\n", b);
    }
    return 0;
}
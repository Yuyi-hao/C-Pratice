/*
Question:
    Take and integer as input. Check and print whether the number is odd or even.
*/
#include <stdio.h>
int main(){
    int a;
    scanf("%d", &a);
    // using ternary and if else 
    // 1. using ternary
    printf("%d is an %s number.\n", a, a&1?"odd":"event"); // using bit manipulation
    
    // 2. using if else
    if(a%2 == 0){
        printf("%d is an %s number.\n",a, "even");
    }else{
        printf("%d is an %s number.\n",a, "odd");
    }

    return 0;
}
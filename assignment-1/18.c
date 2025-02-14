/*
Question:
    Take any number as input. Check and print whether it is prime or not.
*/
#include <stdio.h>
#include <math.h>
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int i = 2;
    while(i <= sqrt(num)){
        if(num%i == 0){
            printf("The number %d is not a prime number.\n", num);
            return 0;
        }
        i++;
    }
    printf("The number %d is a prime number.\n", num);
    return 0;
}
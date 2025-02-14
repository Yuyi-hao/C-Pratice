/*
Question:
    Take a 5 digit number as input. Find and print the sum of its digit.
*/
#include <stdio.h>
int main(){
    int num;
    printf("Enter a 5 digit number: ");
    scanf("%d", &num);
    int sum_of_digit = 0;
    int temp = num;
    while(temp){
        int last_digit = temp%10;
        sum_of_digit += last_digit;
        temp /= 10;
    }
    printf("The sum of digits of %5d is %d\n", num, sum_of_digit);
    return 0;
}
/*
Question:
    Take a 5 digit number as input. Find and print the reverse of the number.
*/
#include <stdio.h>
int main(){
    int num;
    printf("Enter a 5 digit number: ");
    scanf("%d", &num);
    int reverse_num = 0;
    int temp = num;
    while(temp){
        int last_digit = temp%10;
        reverse_num *= 10;
        reverse_num += last_digit;
        temp /= 10;
    }
    printf("The reverse of %5d is %05d\n", num, reverse_num);
    return 0;
}
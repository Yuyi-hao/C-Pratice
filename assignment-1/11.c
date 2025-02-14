/*
Question:
    Take the age of the user as input and then categorize a person as either child(<13), teenager(13<=age<20)
    and adult(>=20) based on age. Print the output.
*/

#include <stdio.h>
int main(){
    int age;
    scanf("%d", &age);
    if(age < 13){
        printf("child.\n");
    }else if(age < 20){
        printf("Teenager.\n");
    }else{
        printf("Adult.\n");
    }

    return 0;
}
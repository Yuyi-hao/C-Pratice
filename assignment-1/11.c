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
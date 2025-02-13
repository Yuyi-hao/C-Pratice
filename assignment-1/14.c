#include <stdio.h>
int main(){
    int num, total=0, count=0;
    while(1){
        scanf("%d", &num);
        if(num==0) break;
        total += num;
        count++;
    }
    float average = 0.0;
    if(count){
        average = total/count;
    }
    printf("The average of all numbers is %0.2f\n", average);
    return 0;
}
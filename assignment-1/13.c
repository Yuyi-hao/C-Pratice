/*
Question:
    Take 3 angles in degree as input. Check if they can form a triangle.
    Then classify the triangle as acute, obluse or right angled triangle. 
*/
#include <stdio.h>
int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &d);
    if(a+b+c == 180){
        printf("Angles [%d, %d, %d] can form a triangle\n", a, b, c);
        if(a==90 || b==90 || c==90){
            printf("The triangle is a right angle triangle\n");
        }
        else if(a>90 || b>90 || c>90){
            printf("The triangle is a obluse triangle\n");
        }else{
            printf("The triangle is a obluse triangle\n");
        }
    }else{
        printf("Angles [%d, %d, %d] can not form a triangle\n", a, b, c);
    }

    return 0;
}
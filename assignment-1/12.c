/*
Question:
    Take the length of 3 sides as input. Check and print if they can form a triangle.
    Then classify the triangle as equilateral, isoscales or scalene. 
*/
#include <stdio.h>
int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &d);
    if((a>b && a>c && a > b+c)||
        (b>a && b>c && b > a+c)||
        (c>b && c>a && c > b+a)){
            printf("Sides [%d, %d, %d] can form a triangle\n", a, b, c);
            if(a==b && b==c){
                printf("The triangle is a equilateral triangle\n");
            }
            else if(a==b || a==c || b==c){
                printf("The triangle is a isoscales triangle\n");
            }else{
                printf("The triangle is a scalene triangle\n");
            }
    }
    else{
        printf("Sides [%d, %d, %d] can not form a triangle\n", a, b, c);
    }

    return 0;
}
/*
Question:
    Take the length of 3 sides as input. Check and print if they can form a triangle.
*/
#include <stdio.h>
int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &d);
    if((a>b && a>c && a > b+c)||
        (b>a && b>c && b > a+c)||
        (c>b && c>a && c > b+a)){
            printf("Sides [%d, %d, %d] can form a triangle\n", a, b, c);
    }

    printf("Sides [%d, %d, %d] can not form a triangle\n", a, b, c);
    return 0;
}
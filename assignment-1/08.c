#include <stdio.h>
int main(){
    int length, breadth;
    scanf("%d %d", &length, &breadth);
    if(length==breadth){
        printf("The quadrilateral is an square\n");
    }else{
        printf("The quadrilateral is a rectangle\n");
    }
    printf("Area of quadrilateral is: %d\n", length*breadth);
    printf("Parameter of quadrilateral is: %d\n", 2*(length+breadth));
    return 0;
}
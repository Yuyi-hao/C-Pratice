/*
Question:
    Take the length and breadth of a quadrilateral. Classify if as a square or rectangle. 
    Calculate the area and perimeter of quadrilateral. Print the classification, area 
    and perimeter as output.
*/
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
/*
Question:
    Take the radius of a circle. Classify if as a square or rectangle. 
    Calculate the area and perimeter of quadrilateral. Print the classification, area 
    and perimeter as output.
*/
#include <stdio.h>
int main(){
    int radius;
    const float PI = 3.14;
    scanf("%d", &radius);
    printf("Area of circle is: %0.2f\n", PI*radius*radius);
    printf("Parameter of circle is: %.2f\n", 2*PI*radius);
    return 0;
}
/*
Question:
    Take as input the temperature of a in fahrenheit. Convert the temperature into
    centigrade degrees. Formula: C = (F-32)*(5/9) 
*/
#include <stdio.h>
int main(){
    float temp;
    scanf("%f", &temp);
    float centi_temp = ((temp-32)*5)/9.0;
    printf("Temperature is %0.2f centigrade degrees\n", centi_temp);
    return 0;
}
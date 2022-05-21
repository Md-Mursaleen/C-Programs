#include <stdio.h>
//Program to convert degree calsius to degree fahrenheit
int main(void){
    float calsius;
    float fahrenheit;
    printf("Enter the temperature in degree calsius :\n");
    scanf("%f",&calsius);
    fahrenheit=(9.0/5.0)*calsius+32.0;
    printf("The temperature in fahrenheit is %f",fahrenheit);

return 0;
}
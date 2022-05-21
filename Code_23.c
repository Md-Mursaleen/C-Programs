#include <stdio.h>
//Program to convert degree calsius to fahrenheit
int main(void);
int main(void){
   float calsius;
    printf("Enter the temperature in degree calsius :\n");
    scanf("%f",&calsius);
    float fahrenheit;
    fahrenheit=9.0/5.0*calsius+32.0;
    printf("The temperature in degree fahrenheit is %f",fahrenheit);
    

return 0;
}
#include <stdio.h>
//Program to calculate simple interest
int main(void){
    float principal,rate,amount,interest,time;
     printf("Enter the amount which is taken as a loan :\n");
     scanf("%f",&principal);
    printf("Enter the rate(in percent) at which loan is taken :\n");
    scanf("%f",&rate);
    printf("Enter the time(in years) for which loan is taken :\n");
    scanf("%f",&time);
    interest=(principal*rate*time)/100.0;
    printf("The interest that is going to be added to the principal amount is :%f",interest);
    amount=principal+interest;
    printf("\nThe amount to be paid finally is :%f",amount);


return 0;
}
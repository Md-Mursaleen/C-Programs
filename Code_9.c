#include <stdio.h>
//Program to find factorial of any number using while loop
int main(void){
    int num,i=1;
    int fact;
    printf("Enter the number whose factorial is to be find :\n");
    scanf("%d",&num);
    fact=1;
    if(num==1){
        fact=1;
    }
    else{
        while(i<=num){
            fact=fact*i;
            i=i+1;
        }
    }
    printf("The factorial of %d is given as:%d",num,fact);


return 0;
}
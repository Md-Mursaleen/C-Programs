#include <stdio.h>
//Program to find factorial of any number using for loop
int main(void){
    int num;
    int fact;
    printf("Enter the number whose factorial is to be find :\n");
    scanf("%d",&num);
    fact=1;
    if(num==1){
        fact=1;
    }
    else{
        for(int i=1;i<=num;i=i+1){
            fact=fact*i;
        }
    }
    printf("The factorial of %d is given as:%d",num,fact);


return 0;
}
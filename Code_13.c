#include <stdio.h>
//Program to find the factorial of any number using recursive function
int fact(int x);
int main(void){
    int num;
    printf("Enter the number whose factorial is to be find :\n");
    scanf("%d",&num);
    int p=fact(num);
    printf("=%d",p);

return 0;
}
int fact(int x){
    if(x==1){
        printf("%d",x);
        return 1;
    }
    else{
        printf("%d*",x);
        return x*fact(x-1);
    }
}
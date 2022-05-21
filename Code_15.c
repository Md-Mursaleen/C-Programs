#include <stdio.h>
//Program to find the nth term of the fibonacci series using recursive function
int fibonacci(int x);
int main(void){
    int num;
    printf("Enter the number upto which fibonacci series is to be find :\n");
    scanf("%d",&num);
    int p=fibonacci(num);
    printf("%d",p);  

return 0;
}
int fibonacci(int x){
    if(x==1){
        return 0;
    }
    else if(x==2){
        return 1;
    }
    else{
        return fibonacci(x-1)+fibonacci(x-2);
    }
}
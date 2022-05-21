#include <stdio.h>
//Program to multiply a given number by 10 using a function with * and & operator
void fun(int *x); 
int main(void){
    int a=9;
    fun(&a);
    printf("The value of a is %d",a);


return 0;
}
void fun(int *x){
    *x=*x*10;

}
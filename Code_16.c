#include <stdio.h>
//Program to swap the values of the 2 variables using '*' operator and '&' operator
void swap(int *x,int *y);
int main(void){
    int a=10;
    int b=9;
    swap(&a,&b);
    printf("The swapped values is %d %d",a,b);


return 0;
}
void swap(int *x,int *y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;

}

#include <stdio.h>
//Program to find the sum of first n natural numbers using recursive function
int sum(int x);
int main(void){
    int num;
    printf("Enter the number upto which the sum is to be find :\n");
    scanf("%d",&num);
    int p=sum(num);
    printf("The sum of first %d natural numbers is %d",num,p); 

return 0;
}
int sum(int x){
    if(x==1){
        return 1;
    }
    else{
        int f;
        f=x+sum(x-1);
        return f;
    }
}
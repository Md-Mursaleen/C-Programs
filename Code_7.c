#include <stdio.h>
//Program to find table of any number using for loop
int main(void){
    int num;
    int j;
    printf("Enter the number whose table you want to find :\n");
    scanf("%d",&num);
    for(int i=1;i<=10;i=i+1){
        j=num*i;
        printf("%d*%d=%d\n",num,i,j);
    }

return 0;
}
#include <stdio.h>
//Program to find table of any number using while loop
int main(void){
    int num;
    int i=1,j;
    printf("Enter the number whose table you want to find :\n");
    scanf("%d",&num);
    while(i<=10){
        j=num*i;
        printf("%d*%d=%d\n",num,i,j);
        i=i+1;
    }

return 0;
}
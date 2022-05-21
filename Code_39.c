#include <stdio.h>
#include <string.h>
//Program to find wheather the two strings are equal or not.
int main(void){
    char x[]="Md Mursaleen";
    char y[12];
    printf("Enter the string that you want to check for equality...\n");
    gets(y);
    int res;
    res=strcmp(x,y);
    printf("The value of res is %d\n",res);
    if(res==1){
        printf("The two strings are equal to each other...");
    }
    else{
        printf("The two strings are not equal to each other....");
    }
    
return 0;
}
#include <stdio.h>
#include <string.h>
//Program to reverse a string using the function
void reverse_str(char x[]);

int main(void){
    char str[12];
    printf("Enter the string that you want to reverse it....\n");
    gets(str);
    reverse_str(str);

return 0;
}

void reverse_str(char x[]){
    printf("The reversed string is given as....\n");
    for(int i=0;i<strlen(x);i=i+1){
        printf("%c",x[strlen(x)-i-1]);
    }
}
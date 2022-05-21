#include <stdio.h>
#include <string.h>
//Program to reverse a string using the concept of swaping.
void reverse_str(char x[]);
void swap(char *x,char *y);
int main(void){
    char str[12];
    printf("Enter the string that you want to reverse it....\n");
    gets(str);
    reverse_str(str);
    printf("The reversed string is given as....\n");
    puts(str);

return 0;
}
void swap(char *x,char *y){
    char temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
void reverse_str(char x[]){
    for(int i=0;i<(strlen(x))/2;i=i+1){
        swap(&x[i],&x[strlen(x)-i-1]);
    }
    puts(x);
}
#include <stdio.h>
//Program to make a clone of a strcpy function.
int main(void){
    char x[12];
    char y[15];
    printf("Enter the first string...\n");
    gets(x);
    for(int i=0;i<12;i=i+1){
        if(x[i]!='\0'){
            y[i]=x[i];
        }
        else{
            y[i]='\0';
        }
    }
    printf("The second string is...\n");
    for(int i=0;i<15;i=i+1){
    printf("%c",y[i]);
    }

return 0;
}
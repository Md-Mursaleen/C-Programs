#include <stdio.h>
//Program to print contents of a given string using a for loop.
int main(void){
    char str[15];
    printf("Enter the given string.....\n");
    gets(str);
    for(int i=0;i<15;i=i+1){
        printf("%c\n",str[i]);

    }

return 0;
}
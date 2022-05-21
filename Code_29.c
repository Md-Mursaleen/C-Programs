#include <stdio.h>
//Program to make a clone of strlen function.
int main(void){

    char string[15];
    printf("Enter the string....\n");
    gets(string);
    for(int i=0;i<15;i=i+1){
        if(string[i]!='\0'){
            printf("%c",string[i]);
        }
        else{
            printf("\nThe string is ended here..\n");
            printf("The length of the given string is %d",i);
            break;
           
        }
    }
     
return 0;
}
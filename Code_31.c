#include <stdio.h>
//Program to find the occurance of a character in a given string.
int char_occurance(char x[],char y);
int main(void){
    char str[15];
    char a;
    printf("Enter the given string...\n");
    gets(str);
    printf("Enter a character whose occurance you want to find...\n");
    scanf("%c",&a);
    int b=char_occurance(str,a);
    if(b==1){
        printf("The character %c is found in the string %s",a,str);
    }
    else{
        printf("The character %c is not found in the string %s",a,str);
    }


return 0;
}
int char_occurance(char x[],char y){
    char *p=x;
    while(*p!='\0'){
        if(*p==y){
            return 1;
        }
        p++;
    }

}
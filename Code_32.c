#include <stdio.h>
//Program to find the number of occurance of a character in a given string.
int char_occurance(char x[],char y);
int main(void){
    char str[15];
    char a;
    printf("Enter the given string...\n");
    gets(str);
    printf("Enter a character whose occurance you want to find...\n");
    scanf("%c",&a);
    int b=char_occurance(str,a);
    printf("The character %c is occured %d times in the given string %s",a,b,str);

return 0;
}
int char_occurance(char x[],char y){
    char *p=x;
    int count=0;
    while(*p!='\0'){
        if(*p==y){
           count++;
        }
        p++;
    }
    return count;

}
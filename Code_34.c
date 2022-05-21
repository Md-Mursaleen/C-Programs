#include <stdio.h>
//Program to read a file and write its all content twice in another file.
int main(void){
    FILE *ptr1;
    FILE *ptr2;
    char ch;
    ptr1=fopen("abc.txt","r");
    while(ptr1!=EOF){
        ch=getc(ptr1);
    }
    fclose(ptr1);
    ptr2=fopen("xyz.txt","w");
    while(ptr2!=EOF){
        putc(ch,ptr2);
        putc(ch,ptr2);
    }
    fclose(ptr2);


return 0;
}
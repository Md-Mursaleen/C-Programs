#include <stdio.h>
//Program to write the table of a number in a file.
int main(void){
    int num;
    int table;
    printf("Enter the number whose table you want to write in a file :\n ");
    scanf("%d",&num);
    FILE *ptr;
    ptr=fopen("abc.txt","w");
    for(int i=1;i<=10;i=i+1){
         table=num*i;
        putw(table,ptr);
    }
    fclose(ptr);

return 0;
}
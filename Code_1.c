#include <stdio.h>
//Program to calculate area of a rectangle
int main(void){
    int length,breadth;
    printf("Enter the length of the rectangle :\n");
    scanf("%d",&length);
    printf("Enter the breadth of the rectangle :\n");
    scanf("%d",&breadth);
    printf("\nThe length & breadth of the rectangle is %d %d",length,breadth);
    int area;
    area=length*breadth;
    printf("\nThe area of the rectangle is %d",area);
    
return 0;
}
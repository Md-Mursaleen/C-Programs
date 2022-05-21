#include <stdio.h>
#include <math.h>
//Program to find area of a square using a library function
int main(void){
    int side;
    printf("Enter the side of a square :\n");
    scanf("%d",&side);
    int area;
    area=pow(side,2);
    printf("The area of the square of side %d is %d",side,area);
    


return 0;
}
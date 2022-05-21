#include <stdio.h>
//Program to find average of 3 numbers using user defined function
int avg(int x,int y,int z);
int main(void){
int a,b,c;
printf("Enter the three numbers whose average has to be find :\n");
scanf("%d %d %d",&a,&b,&c);
int average=avg(a,b,c);
printf("The average of 3 given numbers is %d",average);

return 0;
}
int avg(int x,int y,int z){
    int w=(x+y+z)/3;
    return w;
}
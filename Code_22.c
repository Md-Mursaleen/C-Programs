#include <stdio.h>
//Program to make an user defined 2D array and print it.

int main(void){
     int x,y;
     printf("Enter the size of the array :\n");
    scanf("%d %d",&x,&y);
    int arr[x][y];
   
    for(int i=0;i<x;i=i+1){
        for(int j=0;j<y;j=j+1){
        scanf("%d",&arr[i][j]);
    }
    }
     for(int i=0;i<x;i=i+1){
        for(int j=0;j<y;j=j+1){
        printf("%d ",arr[i][j]);
    }
    printf("\n");
     }
    
    return 0;
}



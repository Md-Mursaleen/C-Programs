#include <stdio.h>
//Program to add,subtract and multiply the two 2*2 matrix(2D array) using a function.

int main(void){
    int a;
    printf("Enter the size of the matrix as....\n");
    scanf("%d",&a);
    int matrix1[a][a];
    int matrix2[a][a];
    int res_matrix[a][a];
    printf("Enter the 1st matrix....\n");
    for(int i=0;i<a;i=i+1){
        for(int j=0;j<a;j=j+1){
            scanf("%d",&matrix1[i][j]);
            
        }
    }
    printf("Enter the 2nd matrix....\n");
    for(int i=0;i<a;i=i+1){
        for(int j=0;j<a;j=j+1){
             scanf("%d",&matrix2[i][j]);
            
        }
    }
    printf("The first matrix is given as....\n");
    for(int i=0;i<a;i=i+1){
        for(int j=0;j<a;j=j+1){
            printf(" %d",matrix1[i][j]);
            
        }
        printf("\n");
    }
    printf("The second matrix is given as....\n");
    for(int i=0;i<a;i=i+1){
        for(int j=0;j<a;j=j+1){
            printf(" %d",matrix2[i][j]);
            
        }
        printf("\n");
    }
    //Addition of the two matrix:
    for(int i=0;i<a;i=i+1){
        for(int j=0;j<a;j=j+1){
            res_matrix[i][j]=matrix1[i][j]+matrix2[i][j];
        }
    }
    printf("The resultant matrix is given as...\n");
    for(int i=0;i<a;i=i+1){
        for(int j=0;j<a;j=j+1){
             printf(" %d",res_matrix[i][j]);
            
        }
        printf("\n");
    }
   

return 0;
}
#include <stdio.h>
//Program to find the largest number in a given array.
int main(void){
    int arr[5];
    printf("Enter the elements in the given array...\n");
    for(int i=0;i<5;i=i+1){
    scanf("%d",&arr[i]);
    }

    printf("The given array is....\n");
    for(int i=0;i<5;i=i+1){
    printf(" %d",arr[i]);
    }
    int larg=arr[0];
    for(int i=1;i<=4;i=i+1){
        if(larg<arr[i]){
            larg=arr[i];
        }
    }
    printf("\nThe largest element in the given array is %d",larg);
    
return 0;
}
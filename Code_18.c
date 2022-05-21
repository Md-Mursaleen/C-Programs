#include <stdio.h>
//Program to make a user input 1D array having n elements and print it on the screen.
int main(void){
    int n;
     printf("Enter the size of the array :\n");
    scanf("%d",&n);
    int arr[n];
   
    for(int i=0;i<n;i=i+1){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i=i+1){
        printf("%d",arr[i]);
    }

return 0;
}
#include <stdio.h>
//Program to reverse an user defined 1D array using a function.
void reverse_arr(int x[],int a);
int main(void){
     int n;
     printf("Enter the size of the array :\n");
    scanf("%d",&n);
    int arr[n];
   
    for(int i=0;i<n;i=i+1){
        scanf("%d",&arr[i]);
    }
    reverse_arr(arr,n);


return 0;
}
void reverse_arr(int x[],int a){
    for(int i=a-1;i>=0;i=i-1){
       printf("%d",x[i]);
    }
}
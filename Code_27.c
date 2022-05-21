#include <stdio.h>
//Program to sorted out the given array and hence find smallest and largest in the same array.
int main(void){
    int n;
    int arr[n];
    printf("Enter the size of the array :\n");
    scanf("%d",&n);
    printf("Enter the elements in the given array :\n");
    for(int i=0;i<n;i=i+1){
    scanf("%d",&arr[i]);
    }
    printf("unSorted list is.......\n");
    for(int i=0;i<n;i=i+1){
        printf(" %d",arr[i]);
    }

    for(int i=0;i<n;i=i+1){
        for(int j=i+1;j<n;j=j+1){
            if(arr[i]>arr[j]){
                int temp;
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("\nSorted list is.......\n");
    for(int i=0;i<n;i=i+1){
        printf(" %d",arr[i]);
    }
    printf("\nThe smallest and largest element in the given set of the array is %d and %d respec.",arr[0],arr[n-1]);
    

return 0;
}
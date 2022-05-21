#include <stdio.h>
//Program to print an array using a function which is called by reference.
void print_arr(int x[],int a);
int main(void){
  int n;
     printf("Enter the size of the array :\n");
    scanf("%d",&n);
    int arr[n];
   
    for(int i=0;i<n;i=i+1){
        scanf("%d",&arr[i]);
    }
    print_arr(arr,n);

return 0;
}

void print_arr(int x[],int a){
    for(int i=0;i<a;i=i+1){
       printf("%d",x[i]);
    }

}
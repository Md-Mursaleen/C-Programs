#include <stdio.h>
#include <stdlib.h>
//Dynamic Memory Allocation
int main(void){
    int *ptr;
    int n;
    printf("Enter the size of the array :\n");
    scanf("%d",&n);
    ptr=(int*) calloc(n,sizeof(int));
    if(ptr==NULL){
        printf("Memory is not allocated successfully.\n");
    }
    else{
          printf("Memory is allocated successfully.\n");
          printf("Enter the elements of the array :\n");
            for(int i=0;i<=n;i=i+1){
              scanf("%d",&ptr[i]);
    }
          }
          printf("The elements of the array is :\n");
           for(int i=0;i<=n;i=i+1){
              printf("%d",ptr[i]);
    }
    int m;
    printf("\nEnter the new size of the array :\n");
    scanf("%d",m);
    //if(n<m){
        //printf("New memory size is allocated to array using realloc.\n");
   // }
    //else{
       // printf("No need for re-allocating the memory to array.\n");
   // }
    ptr=realloc(ptr,m*sizeof(int));
        printf("Enter the elements of the array :\n");
            for(int i=0;i<=m;i=i+1){
              scanf("%d",&ptr[i]);
    }
        printf("The elements of the array is :\n");
           for(int i=0;i<=m;i=i+1){
              printf("%d",ptr[i]);
    }

    free(ptr);
    printf("Memory allocated using calloc is freede successfully.");

return 0;
}
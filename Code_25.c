#include <stdio.h>
//Storage classes in C.
void staticstorageclass();
int main(void){

    staticstorageclass();

return 0;
}
void staticstorageclass(){
   
    for(int i=1;i<5;i=i+1){
         static int a=5;
         int p=1;
         a=a+1;
         p++;
         printf("The value of a in %d iteration is %d\n",i,a);
         printf("The value of p in %d iteration is %d\n",i,p);

    }
}
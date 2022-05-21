#include <stdio.h>
//Program to define the 2 vector in 2D and hence find their sum.
struct vector{
    int x;
    int y;

};
void vector_sum(struct vector v1,struct vector v2);
int main(void){
    struct vector vec;
    struct vector a,b;
    printf("Enter the real or x component of 1st vector...\n");
    scanf("%d",&a.x);
    printf("Enter the imaginery or y component of 1st vector...\n");
    scanf("%d",&a.y);
    printf("Enter the real or x component of 2nd vector...\n");
    scanf("%d",&b.x);
    printf("Enter the imaginery or y component of 2nd vector...\n");
    scanf("%d",&b.y);
    printf("The first vector is given as %d+i%d\n",a.x,a.y);
    printf("\nThe second vector is given as %d+i%d\n",b.x,b.y);
    vector_sum(a,b);


return 0;
}
void vector_sum(struct vector v1,struct vector v2){
    struct vector r;
    r.x=v1.x+v2.x;
    r.y=v1.y+v2.y;
    printf("\nThe resultant vector is given as %d+i%d\n",r.x,r.y);
}
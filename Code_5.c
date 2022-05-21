#include <stdio.h>
#include <math.h>
//Program to find roots of a quadratic equation using if else statement
int main(void){
    int a,b,c;
    int r1,r2;
    printf("The cofficient of x^2 is 'a' is :\n");
    scanf("%d",&a);
    printf("The cofficient of x is 'b' is :\n");
    scanf("%d",&b);
    printf("The constant term is 'c' is :\n");
    scanf("%d",&c);
    printf("The quadratic equation is look like 'ax^2+bx+c=0'\n");
    printf("The discrimant is D\n");
    int D;
    D=b*b-4*a*c;
    if(a!=0){
    if(D>0){
         printf("discrimant is positive,then\n");
        printf("The roots are real and distinct\n");
        printf("If roots are r1 and r2,then\n");
        r1=(-b+sqrt(D))/2*a;
        r2=(-b-sqrt(D))/2*a;
        printf("The roots are given as:%d %d",r1,r2);
    }

    else if(D==0){
        printf("discrimant is zero,then\n");
        printf("The roots are real and equal\n");
        r1=-b/2*a;
        r2=-b/2*a;
        printf("The roots are given as :%d %d",r1,r2);
    }
    else{
        printf("discrimant is negative,then\n");
          printf("The roots are complex and imaginery\n");
    }
    }
    else{
        printf("ERROR,cofficient of x^2 cannot be 0");
    }  
    
return 0;
}
#include <stdio.h>
//Program to input rating & display it using switch case statement
int main(void){
    int rating;
    printf("Enter the ratings (1-5) :\n");
    scanf("%d",&rating);
    switch(rating){
        case 1:
        printf("Your rating is 1");
        break;
        case 2:
        printf("Your rating is 2");
        break;
        case 3:
        printf("Your rating is 3");
        break;
        case 4:
        printf("Your rating is 4");
        break;
        case 5:
        printf("Your rating is 5");
        break;
        default:
        printf("Your rating is invalid");
    }

return 0;
}
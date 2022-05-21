#include <stdio.h>
// Program to reverse an user defined array.
void set_array(int *ar, int a)
{
    for (int i = 0; i < a; i = i + 1)
    {
        scanf("%d", &ar[i]);
    }
}
void get_array(int *ar, int a)
{
    for (int i = 0; i < a; i = i + 1)
    {
        printf("%d\t", ar[i]);
    }
}
void swap(int *p, int *q)
{
    int temp;
    temp = *p;
    *p = *q;
    *q = temp;
}
void reverse_array(int *ar, int a)
{
    for (int i = 0; i < (a) / 2; i = i + 1)
    {
        swap(&ar[i], &ar[a - i - 1]);
    }
}
int main(void)
{
    int n;
    printf("Enter the size of the array :\n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements in the user defined array :\n");
    set_array(arr, n);
    printf("The elements in the array before changes is :\n");
    get_array(arr, n);
    // Reverse an array.
    reverse_array(arr, n);
    printf("\nThe elements in the array after changes is :\n");
    get_array(arr, n);

    return 0;
}
//pass and return an array out of a function.
#include <stdio.h>
int *fun(int *arr)
{
    return arr;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int *ptr;
    //base address of array can be accessed by just typing array name
    ptr = fun(arr);//stores base address in ptr
    for (int i = 0; i < 5; i++)
    {
        //array is printed using pointer arithmetic
        printf("The value of element %d is %d\n", i + 1, *(ptr + i));
    }
    return 0;
}
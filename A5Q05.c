//swap using pointers and functions
#include <stdio.h>
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    //values at original address are swapped
}
int main(){
    int a = 10, b = 20;
    //passing the address of a and b to the function(call by reference)
    swap(&a,&b);
    printf("a is %d and b is %d", a, b);
}
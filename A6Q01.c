//print the address/values of the different variables (int,float,char) using & and * operators.
#include <stdio.h>
int main()
{
    int a = 10;
    float b = 10.5;
    char c = 'x';
    printf("Address of a: %p\n", &a);
    printf("Address of b: %p\n", &b);
    printf("Address of c: %p\n", &c);
    printf("Value of a: %d\n", *(&a));
    printf("Value of b: %f\n", *(&b));
    printf("Value of c: %c\n", *(&c));
    return 0;
}
//& is the 'address of' operator and * is the 'value at address' operator.

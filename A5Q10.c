#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "UNIVERSITY";
    int len = strlen(str);

    //first half
    for (int i = 2; i <= len; i++) {
        printf("%.*s\n", i, str); // the %.*s notation prints first 'i' characters of the string
    }

    //second half
    for (int i = len - 1; i >= 2; i--) {
        printf("%.*s\n", i, str); 
    }

    return 0;
}
//this can also be solved in multiple other ways(even without using the %.*s notation)! do try em out

//WAP to copy one string to another string with and without using the string handling functions
#include <stdio.h>
#include <string.h>
void copyString1(char *str1, char *str2)
{
    int i = 0;
    while (str1[i] != '\0')
    {//copy element by element as in array
        str2[i] = str1[i];
        i++;
    }
    //add null character at the end
    str2[i] = '\0';
}
//using standard library function
void copyString2(char *str1, char *str2)
{
    strcpy(str2, str1);
}
int main()
{
    char str1[] = "Hello";
    char str2[30];
    //passing base address by just the names same as array
    copyString1(str1, str2);
    printf("The copied string is %s\n", str2);
    copyString2(str1, str2);
    printf("The copied string is %s\n", str2);
    return 0;
}


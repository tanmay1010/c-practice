#include <stdio.h>

int my_strlen(char s[])
{
    int i=0;
    while(s[i] != '\0')
    {
        i++;
    }
    return i;
}

int main()
{
    char test1[] = "HELLO";
    char test2[] = "Tanmay";
    char test3[] = "";

    printf("Length of HELLO: %d\n", my_strlen(test1));
    printf("Length of Tanmay: %d\n", my_strlen(test2));
    printf("Length of empty: %d\n", my_strlen(test3));

    return 0;
}
#include <stdio.h>

int my_strcmp(char a[], char b[])
{
    int i=0;
    while(a[i] != '\0' && b[i] != '\0')
    {
        if(a[i] != b[i])
        {
            return a[i] - b[i];
        }
        i++;
    }
    return a[i] - b[i];  // <-- ADD THIS
}

int main()
{
    printf("%d\n", my_strcmp("HELLO", "HELLO"));    // should print 0
    printf("%d\n", my_strcmp("ABC", "ABD"));         // should print negative
    printf("%d\n", my_strcmp("ABD", "ABC"));         // should print positive
    printf("%d\n", my_strcmp("HI", "HELLO"));        // should print non-zero
    printf("%d\n", my_strcmp("", ""));               // should print 0

    return 0;
}
#include <stdio.h>

void my_strcpy(char dest[], char src[])
{
    int i=0;
    while(src[i]!='\0')
    {
        dest[i] =src[i];
        i++;
    }
    dest[i] = '\0';  
}

int main()
{
    char source[] = "HELLO";
    char destination[20];

    my_strcpy(destination, source);
    printf("Copied string: %s\n", destination);

    my_strcpy(destination, "Tanmay");
    printf("Copied string: %s\n", destination);

    return 0;
}
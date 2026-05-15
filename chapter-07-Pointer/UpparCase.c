#include <stdio.h>

void to_uppercase(char *str)
{

    // Loop through string
    // If character is lowercase (between 'a' and 'z'),
    //    subtract 32 to make it uppercase
    // 'a' - 32 = 'A'
    // 'b' - 32 = 'B'
    // ... and so on
    int i=0;
    
    while(str[i] != '\0')
    {
    if(str[i]  >= 'a'  && str[i] <= 'z')
    {
        str[i] = str[i]-32;
    }
    i++;
    }
}

int main()
{
    char name[] = "tanmay";
    to_uppercase(name);
    printf("%s\n", name);

    char mixed[] = "HeLLo WoRLd";
    to_uppercase(mixed);
    printf("%s\n", mixed);

    return 0;
}
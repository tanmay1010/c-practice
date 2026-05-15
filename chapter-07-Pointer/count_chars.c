/*
Write a function that takes a string and returns THREE things using pointers:
Count of uppercase letters
Count of lowercase letters
Count of spaces
 */

#include <stdio.h>

void count_chars(char str[], int *upper, int *lower, int *spaces)
{
    // YOUR CODE
    // Loop through string
    // Check each character:
    //   >= 'A' && <= 'Z' → increment *upper
    //   >= 'a' && <= 'z' → increment *lower
    //   == ' '            → increment *spaces
*lower=0;
*upper=0;
*spaces=0;   
int i=0;
    while(str[i] != '\0')
    {
        if(str[i] >= 'a' && str[i] <='z')
        {
         (*lower)++;
        }
        if(str[i] >= 'A' && str[i] <='Z')
        {
            (*upper)++;
        }
        if(str[i] == ' ')
        {
            (*spaces)++;
        }
        i++;
    }
    
    
}

int main()
{
    int upper, lower, spaces;
    count_chars("HeLLo WoRLd", &upper, &lower, &spaces);
    printf("Upper: %d\nLower: %d\nSpaces: %d\n", upper, lower, spaces);
    return 0;
}
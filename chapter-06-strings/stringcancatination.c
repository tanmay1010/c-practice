#include <stdio.h>

void my_strcat(char dest[], char src[])
{
//Hint: This is basically my_strlen (to find the end) + my_strcpy (to copy from that point). You already know both patterns!
int i=0;
while (dest[i] !='\0')
{
    i++;
}

int length = i;
int j=0;
while(src[j] !='\0')
{
    dest[length] =src[j];
    length++;
    j++;
}
dest[length] = '\0'; 
}

int main()
{
    char result[50] = "HELLO";
    my_strcat(result, " WORLD");
    printf("%s\n", result);     // HELLO WORLD

    char name[50] = "Tanmay";
    my_strcat(name, " Patil");
    printf("%s\n", name);       // Tanmay Patil

    return 0;
}
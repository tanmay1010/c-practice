#include <stdio.h>

int count_char(char *str, char c)
{

    int count_char =0;
    int i =0;
    while(str[i]!= '\0')
    {
    if(str[i] == c)
    {
        count_char++;
       
    }
        i++;
    }
   return count_char; 
}
int main()
{
printf("%d\n", count_char("tanmay", 'a'));  // 2
printf("%d\n", count_char("hello world", 'l')); // 3
printf("%d\n", count_char("hello world", 'z')); // 0
    
}
#include <stdio.h>

int is_palindrome(char s[])
{
    int i=0;
    while(s[i] != '\0')
    {
        i++;
    }
    int length =i;
    int left=0;
    int right=length -1;
    while(left<right)
    {
        if(s[left] != s[right])
        {
            return 0 ;
        }
        left++;
        right--;
    }
   return 1;
    
}

int main()
{
    printf("%d\n", is_palindrome("NITIN"));     // 1
    printf("%d\n", is_palindrome("HELLO"));     // 0
    printf("%d\n", is_palindrome("MADAM"));     // 1
    printf("%d\n", is_palindrome("A"));         // 1
    printf("%d\n", is_palindrome("AB"));        // 0
    printf("%d\n", is_palindrome(""));          // 1

    return 0;
}
#include <stdio.h>
    // YOUR CODE HERE
    // Step 1: Find length
    // Step 2: Use two pointers (left and right)
    // Step 3: Swap characters moving inward
    // Hint: you already know the swap pattern from arrays!
void reverse_string(char s[])
{
    int i=0;
    while(s[i] != '\0')
    {
        i++;
    }
    int length =i;
    int left=0;
    int right=length -1;
    int temp =0;
    while(left<right)
    {
        temp = s[left];
        s[left]=s[right];
        s[right]=temp;

        left++;
        right--;
    }
  
}

int main()
{
    char test1[] = "HELLO";
    char test2[] = "Tanmay";
    char test3[] = "A";

    reverse_string(test1);
    printf("%s\n", test1);    // OLLEH

    reverse_string(test2);
    printf("%s\n", test2);    // yamnaT

    reverse_string(test3);
    printf("%s\n", test3);    // A

    return 0;
}
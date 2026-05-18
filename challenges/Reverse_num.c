#include <stdio.h>
int main()
{
    int num = 1234;
    int rev = 0;
    int temp;
    while (num != 0)
    {
        temp = num % 10;
        num = num / 10;
        rev = rev * 10 + temp;
    }
    printf("%d", rev);
}
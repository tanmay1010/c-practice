/******************************************************************************
Read numbers until user enters -1.
Print total sum.
Remember the read-before-loop pattern.
*******************************************************************************/
#include <stdio.h>

int main()
{
    printf("To stop plesae enter -1 \n");
    printf("Enter Number for sum \n");
    int num;
    int sum = 0;
    int i = 0;
    scanf("%d", &num);
    while (num != -1)
    {
        sum = sum + num;
        scanf("%d", &num);
    }
    printf("%d", sum);
}
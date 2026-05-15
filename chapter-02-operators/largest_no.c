#include <stdio.h>

int main()
{
    int num = 10;
    int num1= 25;
    int num2= 8;
    int largert=0;
    if(num >= num1 && num >= num2)
    {
        printf("%d is largest",num);
    }
    else if( num1 >= num && num1 >= num2)
    {
        printf("%d is largest",num1);
    }
    else if( num2 >= num && num2 >= num1)
    {
        printf("%d is largest",num2);
    }

}
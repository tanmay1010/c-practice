#include <stdio.h>

int main()
{
int num;
printf("Enter number for Table : ");
scanf("%d",&num);
int size =num;
int factorial=1;
for(int i =1;i<=size;i++)
{
        factorial = factorial * i;
    
}
 printf("%d\n",factorial);
}

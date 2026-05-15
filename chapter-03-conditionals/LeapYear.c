/*
Leap year, Nested if approach (400/100/4).
*/

#include <stdio.h>

int main()
{
printf("Enter Year :");
int year;
scanf("%d",&year);
if(year % 4==0 )
{ 
   if(year % 100 == 0)
   { 
    if(year % 400 == 0)
     {
      printf("Leap Year");
     }
     else 
     {
        printf("Not Leap Year"); 
     }
   }
    else
     {
       printf("Leap Year");
     }
}
else
{
     printf("Not Leap Year");

}
}
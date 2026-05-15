/*
Program 5: Grade Calculator.
Read marks (0-100), print grade:

90+ → A
75-89 → B
60-74 → C
40-59 → Pass
Below 40 → Fail
Invalid if marks < 0 or > 100
*/

#include <stdio.h>

int main()
{
    int gread;
    printf("Enter Marks : ");
    scanf("%d",&gread);
    
    if (gread < 0 || gread > 100) 
    {
    printf("Invalid marks\n");
    }
    else if(gread >= 90 )
    {
        printf("A Gerad");
    }
    else if(gread >=76)
    {
        printf("B Gerad");
    } 
    else if(gread >=60)
    {
        printf("C Gerad");
    } 
    else if(gread >=40)
    {
        printf("Pass");
    } 
    else if(gread <= 39)
    {
        printf("Fail");
    } 
    
}
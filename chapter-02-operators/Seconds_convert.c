/*Move to Program 4: Seconds Converter.
Convert total seconds to hours:minutes:seconds.
Example: 3725 → 1h:2m:5s
The pattern:

hours = total / 3600
remaining = total % 3600
minutes = remaining / 60
seconds = remaining % 60 
*/

#include <stdio.h>

int main()
{
    int total = 7325  ;
    int hr = total/3600;
    int remening_time = total%3600;
    int min = remening_time/60;
    int sec =  remening_time%60;

printf("Hr: %d : Min: %d, Sec : %d",hr,min,sec);
}
#include <stdio.h>
#include <limits.h>

int main()
{
int arr[]={2,4,5,7,9};
int max=arr[0];
int second_largest = INT_MIN;
int thired_largest= INT_MIN;

for(int i =0;i<5;i++)
{
    if(arr[i] > max)
    {
        thired_largest = second_largest;
        second_largest=max;
        max=arr[i];
    }
    else if(arr[i]>second_largest)
    {
        thired_largest= second_largest;
        second_largest=arr[i];
        
    }
    else if(arr[i]>thired_largest)
    {
        /******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <limits.h>

int main()
{
int arr[]={2,4,5,7,9};
int max=arr[0];
int second_largest = INT_MIN;
int thired_largest= INT_MIN;

for(int i =0;i<5;i++)
{
    if(arr[i] > max)
    {
        thired_largest = second_largest;
        second_largest=max;
        max=arr[i];
    }
    else if(arr[i]>second_largest)
    {
        thired_largest= second_largest;
        second_largest=arr[i];
        
    }
    else if(arr[i]>thired_largest)
    {
        thired_largest = arr[i];
    }
}

printf("%d\n",thired_largest);

return 0;
}




    }
}

printf("%d\n",thired_largest);

return 0;
}


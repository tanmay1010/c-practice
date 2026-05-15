#include <stdio.h>
#include <limits.h>
void find_min_max(int arr[], int size, int *max, int *min)
{
    // YOUR CODE
    // Find max and min
    // Store results using *max and *min
    *min = arr[0];
    *max = arr[0];
    for(int i=0;i<size;i++)
    {
    if(arr[i]>*max)
    {
 
        *max=arr[i];
    }
    if(arr[i]< *min)
    {
        *min = arr[i];
    }
    }
}

int main()
{
    int nums[] = {3, 7, 1, 9, 4};
    int max, min;
    find_min_max(nums, 5, &max, &min);
    printf("Max: %d, Min: %d\n", max, min);
    return 0;
}
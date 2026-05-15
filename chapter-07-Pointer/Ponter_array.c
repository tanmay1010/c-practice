#include <stdio.h>

void double_array(int *arr, int size)
{
    // Double every element using pointer
    // Use either arr[i] *= 2 OR *(arr+i) *= 2
    for(int i=0;i<size;i++)
    {
       *(arr+i) = *(arr+i) * 2;
    }
}

int main()
{
    int nums[] = {1, 2, 3, 4, 5};
    double_array(nums, 5);
    for (int i = 0; i < 5; i++)
        printf("%d ", nums[i]);
    printf("\n");
    
    return 0;
}
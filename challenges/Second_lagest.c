
#include <stdio.h>
#include <limits.h>

int main()
{
    int arr[] = {1, 2, 4, 5, 9, 8};
    int size = sizeof(arr) / sizeof(arr[0]);
    int max = arr[0];
    int second_max = INT_MIN;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            second_max = max;
            max = arr[i];
        }
        else if (arr[i] > second_max)
        {
            second_max = arr[i];
        }
    }
    printf("%d", second_max);
}

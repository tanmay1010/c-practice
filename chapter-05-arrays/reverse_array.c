#include <stdio.h>
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    for (int i = 0; i < 6 / 2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[6 - i - 1];
        arr[6 - i - 1] = temp;
    }
    for (int i = 0; i < 6; i++)
    {
        printf("%d ", arr[i]);
    }
}
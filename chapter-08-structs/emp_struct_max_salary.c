#include <stdio.h>
#include <string.h>

typedef struct
{
    char name[50];
    int id;
    int salary;
} Emp;

int main()
{
    Emp arr[3] = {
        {"Tanmay", 101, 1000},
        {"Sudhir", 102, 2000},
        {"Sham", 103, 4000},
    };

    for (int i = 0; i < 3; i++)
    {
        printf("%s %d %d \n", arr[i].name, arr[i].id, arr[i].salary);
    }
    int max_i = 0;
    for (int i = 1; i < 3; i++)
    {
        if (arr[i].salary > arr[max_i].salary)
        {
            max_i = i;
        }
    }
    printf("Highest: %s with %.2d\n", arr[max_i].name, arr[max_i].salary);

    return 0;
}
#include <stdio.h>
int main()
{
    int i, arr[20], n;
    printf("enter array size");
    scanf("%d", &n);
    printf("enter array elements");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int max = -32600;
    for (i = 0; i < n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    printf("max: %d\n", max);

    int min = 32600;
    for (i = 0; i < n; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    printf("min: %d\n", min);
}

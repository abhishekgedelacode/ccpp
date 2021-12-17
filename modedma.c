#include <stdio.h>
#include <stdlib.h>

int main()
{
    int max = -32768, count = 0, i, j, ele;
    int *arr = (int *)malloc(5 * sizeof(int));

    printf("enter 5 ele: ");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", arr + i);
    }

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if ((*(arr + i)) == (*(arr + j)))
                count++;
        }
        if (count > max)
        {
            max = count;
            ele = (*(arr + i));
        }
        count = 0;
    }

    printf("mode: %d", ele);
}
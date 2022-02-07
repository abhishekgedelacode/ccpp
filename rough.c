#include <stdio.h>
int main()
{
    int i, j, n = 1, s, r;
    printf("enter rows: ");
    scanf("%d", &r);
    for (i = 0; i < r; i++)
    {
        for (s = 0; s < r - i; s++)
        {
            printf(" ");
        }
        for (j = 0; j < n; j++)
        {
            printf("*");
        }
        n += 2;
        printf("\n");
    }
    n -= 4;
    for (i = 0; i < r - 1; i++)
    {
        for (s = 0; s <= i + 1; s++)
        {
            printf(" ");
        }
        for (j = 0; j < n; j++)
        {
            printf("*");
        }
        n -= 2;
        printf("\n");
    }
}
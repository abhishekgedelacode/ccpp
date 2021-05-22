#include <stdio.h>

int main()
{
    int a = 6, b = 3, c = 2;
    if (b > a && a > c && c > b)
    {
        b = a + 1;
    }
    else
    {
        a = b + 1;
    }
    printf("%d ", a + b + c);
    return 0;
}
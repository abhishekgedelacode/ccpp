#include <stdio.h>

int fun(int a, int b)
{
    int temp;
    while (b)
    {
        temp = a % b;
        a = b;
        b = temp;
    }
    return 0;
}

int main()
{
    printf("%d\n", fun(10, 6));
    return 0;
}
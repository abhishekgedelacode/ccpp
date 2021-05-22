#include <stdio.h>

int main()
{
    int i = 3;
    do
    {
        printf("%d ", i + 3);
        i = i - 1;
    } while (i != 0);
    return 0;
}
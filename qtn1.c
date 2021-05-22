#include <stdio.h>

int main()
{
    int limit = 6, n1 = 0, n2 = 1, n3 = 1, count = 1;
    while (count <= limit)
    {
        count = count + 1;
        printf("%d ", n3);
        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;
    }
    return 0;
}
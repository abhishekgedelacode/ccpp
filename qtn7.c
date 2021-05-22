#include <stdio.h>
int main()
{
    int x = 4, y = 0, z;
    z = (y++, y);
    printf("%d\n", z);
    return 0;
}
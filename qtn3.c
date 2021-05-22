#include <stdio.h>

int sample(int n)
{
    int s = 0, f = 1, i = 1;
    while (i <= n)
    {
        f = f * i;
        s = s + (i / f);
        i = i + 1;
    }
    return s;
}

int main()
{
    int n = 20;
    printf("%d \n", sample(n));
    return 0;
}
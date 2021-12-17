#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int new (int num)
{
    int a[16], j, i = 0, res = 0;
    while (num >= 0)
    {
        a[i++] = num % 2;
        num /= 2;
    }
    for (int j = i; j > 0; j--)
    {
        a[j] = a[j] ^ a[j - 1];
    }
    a[j] = a[j] ^ 1;
    for (j = 0; j < i; j++)
    {
        res = res + (pow(2, a[j]) * j);
    }
    return res;
}

int main()
{
    int num;
    scanf("%d", &num);
    int result = new (num);
    printf("%d", result);
    return 0;
}
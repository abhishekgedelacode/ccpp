#include <stdio.h>
#include <stdlib.h>

int count(int X)
{
    int res = 0, ex = 0;
    for (int i = 0; ex != X; i++)
    {
        for (int j = 0; j < i; j++)
        {
            ex += 2;
        }
        if (ex == X)
            break;
        else
            res++;
        ex = 0;
    }

    return res + 1;
}

int main()
{
    int X;
    scanf("%d", &X);
    int result = count(X);
    printf("%d", result);
    return 0;
}
#include <stdio.h>
main()
{
    int n = 3;
    int i, count = 0;
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            count += 1;
        }
    }
    if (count == 2)
    {
        printf("prime number");
    }
    else
    {
        printf("not prime number");
    }
}
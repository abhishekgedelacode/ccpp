#include <stdio.h>
int main()
{
    char single[11][20] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    char second[11][20] = {"eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
    char digit[11][20] = {"ten", "twenty", "thirty", "fourty", "fifty", "sixty", "seventy", "eighty", "ninety"};
    char hun[] = {"hundred"};
    char tous[] = {"thousand"};

    int n, p, q, r, s, t, count = 0;

    printf("ENTER A NUMBER\n");
    scanf("%d", &n);

    if (n > 0)
    {
        p = n % 10;
        n = n / 10;
        count++;
    }
    if (n > 0)
    {
        q = n % 10;
        n = n / 10;
        count++;
    }
    if (n > 0)
    {
        r = n % 10;
        n = n / 10;
        count++;
    }
    if (n > 0)
    {
        s = n % 10;
        n = n / 10;
        count++;
    }
    if (n > 0)
    {
        t = n % 10;
        n = n / 10;
        count++;
    }

    if (count == 1)
    {
        printf("%s", single[p]);
    }
    if (count == 2)
    {
        if (p == 0)
        {
            printf("%s", digit[q - 1]);
        }
        else if (q == 1 && p > 0)
        {
            printf("%s", second[p - 1]);
        }
        else
        {
            printf("%s %s", digit[q - 1], single[p]);
        }
    }
    if (count == 3)
    {
        if (q == 0 && p == 0)
        {
            printf("%s %s", single[r], hun);
        }
        else if (q > 0 && p == 0)
        {
            printf("%s %s %s", single[r], hun, digit[q - 1]);
        }
        else if (q == 1 && p > 0)
        {
            printf("%s %s %s", single[r], hun, second[p - 1]);
        }
        else
        {
            printf("%s %s %s %s", single[r], hun, digit[q - 1], single[p]);
        }
    }
    if (count == 4)
    {
        if (q == 0 && r == 0 && p == 0)
        {
            printf("%s %s", single[s], tous);
        }
        else if (r == 0 && q == 0 && p > 0)
        {
            printf("%s %s %s", single[s], tous, single[p]);
        }
        else if (r == 0 && p == 0 && q > 0)
        {
            printf("%s %s %s", single[s], tous, digit[q - 1]);
        }
        else if (q == 1 && r == 0 && p >= 0)
        {
            printf("%s %s %s", single[s], tous, second[q - 1]);
        }
        else if (r > 0 && q == 0 && p == 0)
        {
            printf("%s %s %s %s", single[s], tous, single[r], hun);
        }
        else if (p == 0 && r > 0 && q > 0)
        {
            printf("%s %s %s %s %s", single[s], tous, single[r], hun, digit[q - 1]);
        }
        else if (q == 1 && r > 0 && p == 0)
        {
            printf("%s %s %s %s %s", single[s], tous, single[r], hun, second[q - 1]);
        }
        else if (q == 0 && r > 0 && p > 0)
        {
            printf("%s %s %s %s %s", single[s], tous, single[r], hun, single[p]);
        }
        else if (r == 0 && q > 0 && p > 0)
        {
            printf("%s %s %s %s ", single[s], tous, digit[q - 1], single[p]);
        }
        else
        {
            printf("%s %s %s %s %s %s", single[s], tous, single[r], hun, digit[q - 1], single[p]);
        }
    }

    return 0;
}
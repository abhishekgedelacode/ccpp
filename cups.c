#include <stdio.h>
double mat[100][100];

void func(double n)
{
    mat[0][0] = n;
    int level = 0, flag = 1;
    while (flag)
    {
        flag = 0;
        for (int j = 0; j <= level; j++)
        {

            if (mat[level][j] > 1)
            {
                double extra = mat[level][j] - 1;
                mat[level][j] = 1;
                mat[level + 1][j] += extra / 2;
                mat[level + 1][j + 1] += extra / 2;
                flag = 1;
            }
        }
        level++;
    }
}

int main()
{
    int n, k, i, j;
    scanf("%d %d", &n, &k);
    func(k);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j <= i; j++)
        {
            if ((int)mat[i][j] == 1)
                printf("1 ");
            else
                printf("%0.3f ", mat[i][j]);
        }
        printf("\n");
    }
}
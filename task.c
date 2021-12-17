#include <stdio.h>
#include <stdlib.h>

int check(int N, int *A)
{
    int res = 0;
    for (int i = 0; i < N; i++)
    {
        res += (A[i] * (A[i] + 1));
    }
    return res;
}

int main()
{
    int N;
    scanf("%d", &N);
    int *A = (int *)malloc(N * sizeof(int));
    for (int j = 0; j < N; j++)
    {
        scanf("%d", &A[j]);
    }
    int result = check(N, A);
    printf("%d", result);
    return 0;
}
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    n = n + 1;
    int a[20][20];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (j == 0 || j == i - 1)
            {
                a[i][j] = 1;
                continue;
            }
            a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = n - i - 1; j > 0; j--)
        {
            printf(" ");
        }
        for (int k = 0; k < i; k++)
        {
            printf("%d ", a[i][k]);
        }
        printf("\n");
    }
}
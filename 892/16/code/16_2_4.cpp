#include <stdio.h>
#include <cmath>
#include <algorithm>

int main()
{
    int a[10][10] = {0};
    //初始化数组
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            a[i][j] = rand() % 10;
        }
    }
    //按序打印原数组
    printf("The origin matrix is :\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 7 - 1; j++)
        {
            for (int k = k; k < 7 - 1 - j; k++)
            {
                if (a[i][k]< a[i][k + 1])
                {
                    int temp = a[i][k];
                    a[i][k] = a[i][k + 1];
                    a[i][k + 1] = temp;
                }
            }
        }
    }
    //按序打印修改后的数组
    printf("The origin matrix is :\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}
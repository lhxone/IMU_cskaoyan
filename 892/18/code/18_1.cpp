/**
 * @file 18_1.cpp
 * @author Liu Haoxin (lhxone@outlook.com)
 * @brief
 * @version 0.1
 * @date 2022-08-22
 *
 * @copyright Copyright (c) 2022
 *
 */
#include <stdio.h>

bool isSushu(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    if (a > b)
    {
        a = b - a;
        b = b - a;
        a = b + a;
    }
    for (int i = a; i < b; i++)
    {
        if (isSushu(i))
        {
            printf("%d ", i);
        }
    }
    printf("\n");
}
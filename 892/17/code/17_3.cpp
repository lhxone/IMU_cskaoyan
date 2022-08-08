/**
 * @file 17_3.cpp
 * @author Liu Haoxin (lhxone@outlook.com)
 * @brief
 * @version 0.1
 * @date 2022-08-08
 *
 * @copyright Copyright (c) 2022
 *
 */
#include <stdio.h>

bool isNum(int n)
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
        int temp = a;
        a = b;
        b = temp;
    }
    for (int i = a; i < b; i++)
    {
        if (isNum(i) == true)
        {
            printf("%d ", i);
        }
    }
    printf("\n");
}
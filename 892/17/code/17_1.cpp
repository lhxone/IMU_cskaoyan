/**
 * @file 17_1.cpp
 * @author Liu Haoxin (lhxone@outlook.com)
 * @brief 
 * @version 0.1
 * @date 2022-08-08
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>

int main()
{
    int a, b, c, max;
    scanf("%d %d %d", &a, &b, &c);
    if (a >= b)
    {
        if (a >= c)
        {
            max = a;
        }
        else
        {
            max = c;
        }
    }
    else
    {
        if (b >= c)
        {
            max = b;
        }
        else
        {
            max = c;
        }
    }
    printf("%d\n", max);
}
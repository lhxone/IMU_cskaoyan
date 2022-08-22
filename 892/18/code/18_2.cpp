/**
 * @file 18_2.cpp
 * @author Liu Haoxin (lhxone@outlook.com)
 * @brief
 * @version 0.1
 * @date 2022-08-22
 *
 * @copyright Copyright (c) 2022
 *
 */
#include <stdio.h>

int main()
{
    int n, reversedInteger = 0, remainder, originalInteger;
    scanf("%d", &n);

    originalInteger = n;

    // 翻转
    while (n != 0)
    {
        remainder = n % 10;
        reversedInteger = reversedInteger * 10 + remainder;
        n /= 10;
    }

    // 判断
    if (originalInteger == reversedInteger)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}

/**
 * @file 16_2_1.cpp
 * @author Liu Haoxin (lhxone@outlook.com)
 * @brief 
 * @version 0.1
 * @date 2022-08-05
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>

int MySum(int m, int n)
{
    return m + n;
}

int main()
{
    int m, n, result;
    scanf("%d %d", &m, &n);
    result = MySum(m, n);
    printf("Result is: %d\n", result);
}
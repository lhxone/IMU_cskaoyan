/**
 * @file 16_2_2.cpp
 * @author Liu Haoxin (lhxone@outlook.com)
 * @brief 
 * @version 0.1
 * @date 2022-08-05
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>

int main()
{
    long double f = 1e-6, e = 1;
    long long t = 1, i = 1;
    long double var = 1.0 / t;
    while (var >= f)
    {
        e = e + var;
        t = t * i++;
        var = 1.0 / t;
    }
    printf("e=%Lf,t=%.7Lf\n", e, var);
}
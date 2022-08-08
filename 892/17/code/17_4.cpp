/**
 * @file 17_4.cpp
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
    int N;
    double sum = 0, up = 2, down = 1, temp;
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        sum += up / down;
        temp = up;
        up += down;
        down = temp;
    }
    printf("%lf\n", sum);
}
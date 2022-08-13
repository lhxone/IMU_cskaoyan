/**
 * @file 17_6.cpp
 * @author Liu Haoxin (lhxone@outlook.com)
 * @brief
 * @version 0.1
 * @date 2022-08-13
 *
 * @copyright Copyright (c) 2022
 *
 */
#include <stdio.h>

void print(char ch[], int len)
{
    if (len == -1)
    {
        return;
    }
    printf("%c", ch[len]);
    print(ch, len - 1);
}

int main()
{
    char c[20];
    int loc = 0;
    while (scanf("%c", &c[loc]) && c[loc] != '.')
    {
        loc++;
    }
    print(c, loc - 1);
    printf("\n");
}
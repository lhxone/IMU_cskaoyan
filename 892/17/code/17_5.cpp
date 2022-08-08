/**
 * @file 17_5.cpp
 * @author Liu Haoxin (lhxone@outlook.com)
 * @brief
 * @version 0.1
 * @date 2022-08-08
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <stdio.h>

int MyStrlen(char *str)
{
    int len = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
        {
            len++;
        }
    }
    return len;
}

int main()
{
    char s[20];
    gets(s);
    int len;
    len = MyStrlen(s);
    printf("%d\n", len);
}
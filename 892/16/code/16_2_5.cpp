/**
 * @file 16_2_5.cpps
 * @author Liu Haoxin (lhxone@outlook.com)
 * @brief 
 * @version 0.1
 * @date 2022-08-05
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>
int convert(char s[], int n)
{
    int i;
    if ((i = n / 10) != 0)
        convert(s + 1, i);
    *s = n % 10 + '0';
    return 0;
}

int main()
{
    int num;
    char str[10] = " ";
    printf("input integer data：");
    scanf("%d", &num);
    convert(str, num);
    printf("output string：\n");
    puts(str);
    return 0;
}
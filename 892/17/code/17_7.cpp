/**
 * @file 17_7.cpp
 * @author Liu Haoxin (lhxone@outlook.com)
 * @brief
 * @version 0.1
 * @date 2022-08-15
 *
 * @copyright Copyright (c) 2022
 *
 */
#include <stdio.h>

bool isRun(int year)
{
    if (((year % 4 == 0) && (year % 100 != 0)) || year % 400 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int getDayByMonth(int month, int year)
{
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
    {
        return 31;
    }
    else if (month == 2)
    {
        if (isRun(year))
        {
            return 29;
        }
        else
        {
            return 28;
        }
    }
    else
    {
        return 30;
    }
}

int getDayByYear(int year)
{
    if (isRun(year))
    {
        return 366;
    }
    else
    {
        return 365;
    }
}

int main()
{
    int start_year, start_month, start_day;
    int end_year, end_month, end_day;
    int days = 0;
    scanf("%d %d %d", &start_year, &start_month, &start_day);
    scanf("%d %d %d", &end_year, &end_month, &end_day);
    //计算本年已过天数
    int past = 0;
    for (int i = 1; i < start_month; i++)
    {
        past += getDayByMonth(i, start_year);
    }
    past += start_day;
    //将本年剩余天数累加到days
    days += past;
    //计算中间年数
    past = 0;
    for (int i = start_year; i < end_year; i++)
    {
        past += getDayByYear(i);
    }
    days += past;
    past = 0;
    //计算end_year已过天数
    for (int i = 1; i < end_month; i++)
    {
        past += getDayByMonth(i, end_year);
    }
    past += end_day;
    days += past;
    printf("%d-%d-%d ~ %d-%d-%d : %d\n", start_year, start_month, start_day, end_year, end_month, end_day, days);
    return 0;
}
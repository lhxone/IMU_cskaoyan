/**
 * @file 16_2_4.cpp
 * @author Liu Haoxin (lhxone@outlook.com)
 * @brief 
 * @version 0.1
 * @date 2022-08-05
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>
#include <cmath>

//自定义交换
void swap(int *x, int *y)
{
    int t = *x;
    *x = *y;
    *y = t;
}

//自定义快速排序
void quick_sort_recursive(int arr[], int start, int end)
{
    if (start >= end)
        return;
    int mid = arr[end];
    int left = start, right = end - 1;
    while (left < right)
    {
        while (arr[left] < mid && left < right)
            left++;
        while (arr[right] >= mid && left < right)
            right--;
        swap(&arr[left], &arr[right]);
    }
    if (arr[left] >= arr[end])
        swap(&arr[left], &arr[end]);
    else
        left++;
    if (left)
        quick_sort_recursive(arr, start, left - 1);
    quick_sort_recursive(arr, left + 1, end);
}

void quick_sort(int arr[], int len)
{
    quick_sort_recursive(arr, 0, len - 1);
}

int main()
{
    int a[10][10] = {0};
    //初始化数组
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            a[i][j] = rand() % 10;
        }
    }
    //按序打印原数组
    printf("The origin matrix is :\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    //按行进行排序
    for (int i = 0; i < 4; i++)
    {
        quick_sort_recursive(a[i], 0, 6);
    }
    //按序打印修改后的数组
    printf("The origin matrix is :\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}
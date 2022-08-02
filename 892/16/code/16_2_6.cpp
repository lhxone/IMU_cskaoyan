#include <stdio.h>
int main()
{
    char str[32] = {0};
    printf("请输入字符串：");
    gets(str);
    int arry[32] = {0};
    int count = 0;
    char *p = str;
    while (*p)
    {
        if (*p >= '0' && *p <= '9')
        {
            while (*p >= '0' && *p <= '9')
            {
                arry[count] = arry[count] * 10 + (*p - '0');
                p++;
            }
            count++;
        }
        p++;
    }
    printf("总共存有%d个数字\n", count);
    for (int i = 0; i < count; i++)
    {
        printf("%d  ", arry[i]);
    }
    return 0;
}

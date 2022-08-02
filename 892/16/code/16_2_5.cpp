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
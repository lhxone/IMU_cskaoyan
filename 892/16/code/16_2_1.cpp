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
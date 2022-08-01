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
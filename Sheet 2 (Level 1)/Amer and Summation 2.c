#include <stdio.h>

int main()
{
    long long  x, y, sum = 0;
    scanf("%lld %lld", &x, &y);

    for(; x <= y; x++)
    {
        sum += x;
    }

    printf("%lld", sum);
    return 0;
}

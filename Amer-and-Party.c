#include <stdio.h>

int main()
{
    long long n, p;
    scanf("%lld", &n);

    p = n*(n-1)/2;
    
    printf("%lld", p);
    return 0;
}
#include <stdio.h>

int main()
{
    int n, d;
    scanf("%d", &n);

    int m = n / 2;

    printf("1 ");
    for(d = 2; d <= m; d++)
    {
        if(n % d == 0)
        {
            printf("%d ", d);
        }
    }
    if(n > 1)
    {
        printf("%d ", n);
    }

    return 0;
}

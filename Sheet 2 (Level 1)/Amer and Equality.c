#include <stdio.h>

int main()
{
    int n, x, y, c = 0;
    scanf("%d", &n);

    for(x = 1; x <= n / 2; x++)
    {
        for(y = x; y < n; y++)
        {
            if(x + y == n)
            {
                ++c;
                break;
            }
        }
    }

    printf("%d", c);
    return 0;
}

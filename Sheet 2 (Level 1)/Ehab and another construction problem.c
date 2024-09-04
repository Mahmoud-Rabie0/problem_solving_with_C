#include <stdio.h>

int main()
{
    int x;
    scanf("%d", &x);

    int a, b;

    for(a = x; a >= 1; a--)
    {
        for(b = 2; b <= x; b++)
        {
            if(a % b == 0 && a * b > x && a / b < x)
            {
                printf("%d %d", a, b);
                return 0;
            }
        }
    }
    printf("-1");
    return 0;
}

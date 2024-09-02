#include <stdio.h>

int main()
{
    int  a, b, c;
    scanf("%d %d %d", &c, &a, &b);

    if(a * a + b * b == c *c)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}

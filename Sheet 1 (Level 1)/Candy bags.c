#include <stdio.h>
 
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
 
    int total = a + b;
 
    if(total % 2 == 0)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}
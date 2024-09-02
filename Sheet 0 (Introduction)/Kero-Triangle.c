#include <stdio.h>
 
int main()
{
    short a, b, c;
    scanf("%hd %hd %hd", &a, &b, &c);
 
    int area = 0.5 * a * b;
    int perimeter = a + b + c;
    
    printf("%d\n", area);
    printf("%d", perimeter);
    return 0;
}
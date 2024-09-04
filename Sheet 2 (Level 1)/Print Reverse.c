#include <stdio.h>

int main()
{
    int number, lastDigit, reverse = 0;
    scanf("%d", &number);

    while(number > 0)
    {
        lastDigit = number % 10;
        reverse = (reverse * 10) + lastDigit;
        number = number / 10;
    }

    printf("%d", reverse);
    return 0;
}

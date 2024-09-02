#include <stdio.h>

int main()
{
    char ch;
    scanf("%c", &ch);

    if(ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z')
    {
        printf("Alphabet ");

        if(ch >= 'A' && ch <= 'Z')
        {
            printf("Upper ");
        }
        else
        {
            printf("Lower ");
        }

        // Convert from Upper to Lower
        if(ch >= 'A' && ch <= 'Z')
        {
            ch = ch + 32;
        }
        //

        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        {
            printf("Vowel");
        }
        else
        {
            printf("Consonant");
        }
    }
    else if(ch >= '!' && ch <= '/' || ch >= ':' && ch <= '@' || ch >= '[' && ch <= '`' || ch >= '{' && ch <= '~')
    {
        printf("Special");
    }
    else if(ch >= '0' && ch <= '9')
    {
        printf("Number");
    }
    return 0;
}

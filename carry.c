#include <stdio.h>
#include <string.h>
int main()
{
    char s[100];
    printf("String likh: ");
    scanf("%[^\n]s", s);
    int a = 1;
    int l = strlen(s);

    for (int i = 0; i < l / 2; i++)
    {
        if (s[0] != s[l - i - 1])
            a = 0;
            break;
    }

    if (a == 1)
    {
        printf("is palindrome");
    }
    else
    {
        printf("Nope baby");
    }
    return 0;
}
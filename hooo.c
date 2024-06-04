#include <stdio.h>
#include <string.h>
int main()
{
    char s[100];
    printf("Enter string: ");
    scanf("%[^\n]s", s);

    int i, j;
    int c = 0;
    int m = 0;
    char rep = '\0';
    for (i = 0; i < strlen(s); i++)
    {
        c = 0;
        for (j = 0; j < strlen(s); j++)
        {
            if (s[i] == s[j])
                c++;
        }
        if (m < c)
        {
            m = c;
            rep = s[i];
        }
    }
    printf("%c for %d", rep, c);

    return 0;
}
#include <stdio.h>
#include <string.h>
void swap(char *i, char *j)
{
    char c;
    c = *i;
    *i = *j;
    *j = c;
}

int main()
{
    printf("Enter string: ");
    char s[100];
    scanf("%[^\n]s", s);
    int l = strlen(s);
    for (int i = 0; i < l/2; i++)
    {
        swap(&s[i], &s[l - i - 1]);
    }

    printf("%s", s);
    return 0;
}
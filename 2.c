#include <stdio.h>
#include <string.h>
int main()
{
    char s[100];
    printf("Enter string : ");
    scanf("%[^\n]s", s);

    int l = strlen(s);
    for (int i = 0; i < l; i++)
    {
        for (int j = i + 1; j < l; j++)
        {
            if (s[i] == s[j])
            {
                for (int k = j; k < l; k++)
                {
                    s[k] = s[k + 1];
                }
            }
        }
    }
    printf("%s", s);
    return 0;
}
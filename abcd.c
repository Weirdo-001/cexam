#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char s[100];
    int n;
    scanf("%[^\n]s", s);
    printf("Shift value :");
    scanf("%d", &n);
    for (int i = 0; i < strlen(s); i++)
    {

        if (s[i] >= 65 && s[i] <= 90)
        {
            s[i] = (char)((int)(s[i]) + n);
            if (s[i] > 90)
            {
                s[i] = s[i] - 90 + 65 - 1;
            }
        }
        if (s[i] >= 97 && s[i] <= 122)
        {
            s[i] = (char)((int)(s[i]) + n);
            if (s[i] > 122)
            {
                s[i] = s[i] - 122 + 97 - 1;
            }
        }
    }

    printf("%s",s);
    return 0;
}
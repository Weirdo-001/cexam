#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    fgets(str, 100, stdin);
    int le = strlen(str);

    for (int i = 0; i < le; i++)
    {
        if (str[i] == ' ')
        {
            for (int j = i; j < le; j++)
            {
                str[j] = str[j + 1];
            }
        }
    }
    puts(str);

    return 0;
}
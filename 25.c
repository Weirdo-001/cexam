#include <stdio.h>
#include <string.h>

int sub(char str[], char substr[]) {
    int a = 0;
    int sublen = strlen(substr);
    int len = strlen(str);

    for (int i = 0; i <= len - sublen; i++) {
        int j;
        for (j = 0; j < sublen; j++) {
            if (str[i + j] != substr[j])
                break;
        }
        if (j == sublen)
            a++;
    }
    return a;
}

int main() {
    char str[100], substr[100];
    printf("Enter a string: ");
    scanf("%s", str);
    printf("Enter a substring: ");
    scanf("%s", substr);

    int n = sub(str, substr);
    printf("Total number of appearances of '%s' in '%s' is: %d\n", substr, str, n);

    return 0;
}

#include <stdio.h>
void Sname(char nm[]) {
    int i, k = 0;
    i = 0;
    while (nm[i] != '\0') {
        if (nm[i] == ' ') {
            printf("%c. ", nm[k]);
            k = i + 1;
        }
        i++;
    }
    printf("%s\n", nm + k);
}

int main() {
    char name[21];
    printf("Enter your name: ");
    scanf("%[^\n]", name);
    Sname(name); 
    return 0;
}

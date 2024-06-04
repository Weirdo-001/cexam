#include <stdio.h>
#include <stdlib.h>

int main() {
    int arr[5];
    int *ptr = arr;
    int i, diffSum = 0;

    printf("Enter 5 integers separated by spaces: ");
    for (ptr = arr; ptr < arr + 5; ptr++) {
        scanf("%d", ptr);
    }

    for (ptr = arr; ptr < arr + 4; ptr++) {
        int diff = abs(*ptr - *(ptr + 1));
        diffSum += diff;
    }

    int sum = 0;
    while (diffSum != 0) {
        int digit = diffSum % 10;
        sum += digit * digit * digit;
        diffSum /= 10;
    }

    printf("Result: %d\n", sum);

    return 0;
}
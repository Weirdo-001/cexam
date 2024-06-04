#include <stdio.h>
int main()
{
    int arr[5];
    int n;
    int f = 0;
    printf("Enter array: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Element to search : ");
    scanf("%d", &n);
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] == n)
        {
            printf("At position %d", i + 1);
            f = 1;
            break;
        }
    }
    if (f == 0)
    {
        printf("at position -1");
    }
    return 0;
}
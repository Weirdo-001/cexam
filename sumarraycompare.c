#include <stdio.h>
int max(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}
int min(int a, int b)
{
    if (a < b)
        return a;
    else
        return b;
}
int main()
{
    int n;
    printf("Enter no. of elements of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("enter array elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int a = 0;
    int b = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            a = a + arr[i];
        }
        else
            {
                b = b + arr[i];
            }
    }
    int diff = max(a, b) - min(a, b);
    printf("The differnec is : %d", diff);
    return 0;
}
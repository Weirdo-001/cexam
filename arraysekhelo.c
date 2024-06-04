#include <stdio.h>
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

    int x;
    printf("Enter the value to be compared: ");
    scanf("%d", &x);
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (x < arr[i])
        {
            count = count + 1;
        }
    }

    printf("The number of elements are : %d", count);
    return 0;
}
#include <stdio.h>
#include <stdbool.h>
int main()
{
    int arr[7] = {1, 2, 3, 4, 1, 2, 3};
    for (int i = 0; i <= 6; i++)
    {
        int flag = false;
        for (int j = i+1 ; j <= 6; j++)
        {
            if (arr[i] == arr[j])
            {
                flag = true;
            }
        }
        if (flag == false)
        {
            printf("%d", arr[i]);
            break;
        }
    }

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
   int arr[5];
   int sum =0;
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    int diff = 0;
    for (int i = 0; i < 4; i++)
    {
        diff += (arr[i] - arr[i + 1]);
    }
   int d =  abs(diff);


    while (d != 0) {
        int digit = d % 10;
        sum += digit * digit * digit;
        d /= 10;
    }

    printf("%d",sum);
    
    return 0;
}
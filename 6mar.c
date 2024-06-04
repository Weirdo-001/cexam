// 1/1! + 3/3! + 5/5!.....
#include <stdio.h>
int main()
{
    int n;
    printf("Enter number of terms: ");
    scanf("%d", &n);
    int a[n];
    int b[n];
    float d[n],sum;
    int i, j;
    for (i = 1; i < 2 * n; i = i + 2)
    {
        a[i] = i;
    }
   
    for (i = 1; i < 2 * n; i = i + 2)
    {
        int fact = 1;
        for (int j = 2; j <= a[i]; j++)
        {
            fact *= j;
        }
        b[i] = fact;
    }
    for (i = 1; i < 2 * n; i = i + 2)
    {
        d[i] = (float) a[i] / b[i];
    }
    for (i = 1; i < 2 * n; i = i + 2)
    {
        sum += d[i];
    }
    printf("%f",sum);
    return 0;
}
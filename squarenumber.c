// 25 - 625 - 25
#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    int c = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    int s = n * n;
    printf("%d\n", s);

    for (int i = n; i > 0; i = i / 10)
    {
        c = c + 1;
    }
    double t = pow(10, c);
    int te = t;
    int v = s % te;
    printf("%d", v);

    return 0;
}

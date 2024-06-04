#include <stdio.h>
int min(int p, int q)
{
    if (p > q)
        return q;
    else
        return p;
}

int func(int x, int y)
{int hcf;
    for (int i = min(x, y); i >= 1; i--)
    {
        if (x % i == 0 && y % i == 0)
        {
           hcf =  i;
            break;
        }
    }
}
int main()
{
    int a, b;
    printf("enter first number :");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    int hcf = func(a, b);

    printf("HCF is %d", hcf);
    return 0;
}
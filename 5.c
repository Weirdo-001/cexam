#include <stdio.h>
#include <math.h>
int fact(int a)
{
    if (a == 1)
        return 1;
    else
        return a * fact(a - 1);
}
int prime(int b)
{
    int a = 0;
    for (int i = 2; i <= b / 2; i++)
    {
        if (b % i == 0)
        {
            a = 1;
            break;
        }
    }

    if (a == 0)
    {
        printf("Number is prime");
    }
    else
    {
        printf("Consonant");
    }
}
int main()
{
    int n;
    int a, b;
    int c = 0;
    while (1)
    {
        printf("\nEnter choice, 123: ");
        scanf("%d", &n);
        c++;
        switch (n)
        {
        case 1:
            printf("\nEnter number: ");
            scanf("%d", &a);

            printf("%d", fact(a));
            break;
        case 2:
            printf("\nEnter number: ");
            scanf("%d", &b);
            prime(b);
            break;
        case 3:
            printf("\nExit : %d", c);
            return 0;

        default:
            printf("\ninvalid");
            break;
        }
    }
    return 0;
}

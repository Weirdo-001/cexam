// multiplication of 2 matrices 3 by 3 order. 3 loops chalenge
#include <stdio.h>
int main()
{
    int A[3][3];
    int B[3][3];
    int C[3][3];
    int i, j, m;
    printf("Matric 1: ");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }
    printf("Matric 2: ");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            C[i][j] = 0;
            for (m = 0; m < 3; m++)
            {
                C[i][j] += A[i][m] * B[m][j];
            }
        }
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
    return 0;
}
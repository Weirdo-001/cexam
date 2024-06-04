#include <stdio.h>
int main()
{
    int n;
    
    printf("eneter number :");
    scanf("%d", &n);
int c[n];
int sum = 0;
    for (int i = n; i != 0; i = i / 10)
    {
        c[n]= i % 10;
        sum = sum + c[n];
        printf("%d",c[n]);
    }

       
        printf("\n%d", sum);
  

    return 0;
}

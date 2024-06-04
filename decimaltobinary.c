#include<stdio.h>
int main(){
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    int arr[n];
    
    int i = 0;
    for(i = 0; n > 0; i++) {
        arr[i] = n % 2;
        n /= 2;
    }   
    printf("Binary representation: ");
    for(int j = i - 1; j >= 0; j--) {
        printf("%d ", arr[j]);
    }
    return 0;
}

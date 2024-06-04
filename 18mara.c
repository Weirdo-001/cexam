//to find out the addition of fibonacci series upto given limits using retrun with arguments category of function
#include <stdio.h>
int sumOfFibonacci(int terms) {
    int prev = 0, curr = 1, next;
    int sum = 0;

    for (int i = 0; i < terms; i++) {
        sum += prev; 
        next = prev + curr; 
        prev = curr; 
        curr = next;
    }

    return sum;
}

int main() {
    int terms;
    printf("number of terms: ");
    scanf("%d", &terms);

    int sum = sumOfFibonacci(terms);

    printf("Sum: %d\n", sum);

    return 0;
}

#include <stdio.h>

int isPrime(int n) {
    if (n <= 1) 
    return 0;  
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return 0; 
    }
    return 1; 
}

int main() {
    int choice;

    printf("Choose an option:\n");
    printf("1. Display all prime numbers between two numbers\n");
    printf("2. Find the nth prime number\n");
    scanf("%d", &choice);

    if (choice == 1) {
        int low, high;
        printf("Enter lower limit: ");
        scanf("%d", &low);
        printf("Enter upper limit: ");
        scanf("%d", &high);

        printf("Prime numbers between %d and %d are:\n", low, high);
        for (int i = low; i <= high; i++) {
            if (isPrime(i)) {
             printf("%d ", i);
            }
        }
        printf("\n");

    } else if (choice == 2) {
        int n, count = 0, num = 2;
        printf("Enter n (to find nth prime number): ");
        scanf("%d", &n);

        while (1) {
            if (isPrime(num)) {
                count++;
                if (count == n) {
               printf("The %dth prime number is: %d\n", n, num);
                 break;
                }
            }
            num++;
        }
    } else {
        printf("Invalid choice!\n");
    }

    return 0;
}
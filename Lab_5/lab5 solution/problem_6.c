// Write a C program that finds the second largest and second smallest numbers in a array of n
// numbers

#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);

    int min = a[0], max = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] < min) min = a[i];
        if (a[i] > max) max = a[i];
    }

    int second_min = max, second_max = min;
    for (int i = 0; i < n; i++) {
        if (a[i] > min && a[i] < second_min) second_min = a[i];
        if (a[i] < max && a[i] > second_max) second_max = a[i];
    }

    if (second_min == max) printf("No second smallest\n");
    else printf("Second smallest = %d\n", second_min);

    if (second_max == min) printf("No second largest\n");
    else printf("Second largest = %d\n", second_max);

    return 0;
}
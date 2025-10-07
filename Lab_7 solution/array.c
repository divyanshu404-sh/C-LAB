#include <stdio.h>


void findMaxMin(int arr[], int n, int *max, int *min) {
    *max = arr[0];
    *min = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > *max) *max = arr[i];
        if (arr[i] < *min) *min = arr[i];
    }
}


float computeAverage(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return (float)sum / n;
}


int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) return i; 
    }
    return -1; 
}

int main() {
    int n, key, max, min;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }


    findMaxMin(arr, n, &max, &min);
    printf("Maximum element: %d\n", max);
    printf("Minimum element: %d\n", min);

    
    printf("Average of array elements: %.2f\n", computeAverage(arr, n));

    
    printf("Enter element to search: ");
    scanf("%d", &key);
    int pos = linearSearch(arr, n, key);
    if (pos != -1) {
        printf("Element %d found at index %d\n", key, pos);
    } else {
        printf("Element %d not found in the array\n", key);
    }

    return 0;
}
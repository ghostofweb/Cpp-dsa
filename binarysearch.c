#include <stdio.h>

int main() {
    int n, i, z, low, high, mid;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int a[n]; // Declare array with size n

    printf("Enter the elements in the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter the element you want to find in the array: ");
    scanf("%d", &z);

    low = 0;
    high = n - 1;

    while (low <= high) {
        mid = (low + high) / 2;

        if (a[mid] == z) {
            printf("Element found at index %d.\n", mid);
            break;
        } else if (a[mid] < z) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    if (low > high) {
        printf("Element not found in the array.\n");
    }

    return 0;
}

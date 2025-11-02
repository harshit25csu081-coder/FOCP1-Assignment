#include <stdio.h>
int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    printf("\nPeak elements in the array:\n");

    for (int i = 0; i < n; i++) {
        if (i == 0 && a[i] >= a[i + 1]) {
            printf("%d\n", a[i]);
        }
        else if (i == n - 1 && a[i] >= a[i - 1]) {
            printf("%d\n", a[i]);
        }
        else if (i > 0 && i < n - 1) {
            if (a[i] >= a[i - 1] && a[i] >= a[i + 1]) {
                printf("%d\n", a[i]);
            }
        }
    }

    return 0;
}
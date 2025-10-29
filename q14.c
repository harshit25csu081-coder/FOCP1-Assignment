#include <stdio.h>
int main() {
    int arr[100], n, i, j, count = 0,Prime;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter the array elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < n; i++) {
        if(arr[i] <= 1)
            continue;
        Prime = 1;
        for(j = 2; j <= arr[i] / 2; j++) {
            if(arr[i] % j == 0) {
                Prime = 0;
                break;
            }
        }

        if(Prime == 1)
            count++;
    }
    printf("Number of prime numbers in the array: %d\n", count);

    return 0;
}

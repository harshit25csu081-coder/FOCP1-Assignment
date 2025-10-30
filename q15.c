#include <stdio.h>
int main() {
    int arr[100], n, i, last;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("\nArray before rotation:\n");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);
    last = arr[n - 1];
    // shift elements right by one
    for(i = n - 1; i > 0; i--)
        arr[i] = arr[i - 1];
    // put last element at first position
    arr[0] = last;
    printf("\n\nArray after clockwise rotation:\n");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}

#include <stdio.h>
int main() {
    int arr[100], n, i, position;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("\nArray before deletion:\n");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n\nEnter position to delete (1 to %d): ", n);
    scanf("%d", &position);
    if(position < 1 || position > n) {
        printf("Invalid position!");
        return 0;
    }
    for(i = position - 1; i < n - 1; i++)
        arr[i] = arr[i + 1];
    n--;
    printf("\nArray after deletion:\n");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}

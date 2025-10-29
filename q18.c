#include <stdio.h>
int main() {
    int arr[100], n=10, i, j, count, found = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter array elements:\n");
    for(i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Duplicate elements are: ");
    for(i = 0; i < 10; i++) {
        count = 1;
        for(j = i + 1; j < 10; j++) {
            if(arr[i] == arr[j] && arr[j] != -1) {
                count++;
                arr[j] = -1;  
            }
        }
        if(count > 1 && arr[i] != -1) {
            printf("%d ", arr[i]);
            found = 1;
        }
    }
    if(found == 0)
        printf("-1");
    return 0;
}

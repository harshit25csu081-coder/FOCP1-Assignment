        #include <stdio.h>
int main() {
    int scores[100], even_array[100], odd_array[100];
    int n, i, ec= 0, oc = 0;
    printf("Enter how many scores: ");
    scanf("%d", &n);
    printf("Enter the scores:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &scores[i]);
    }
    for (i = 0; i < n; i++) {
        if (scores[i] % 2 == 0) {
            even_array[ec] = scores[i];
            ec++;
        } else {
            odd_array[oc] = scores[i];
            oc++;
        }
    }
    printf("Even numbers are: ");
    for (i = 0; i < ec; i++) {
        printf("%d ", even_array[i]);
    }
    printf("\nOdd numbers are: ");
    for (i = 0; i < oc; i++) {
        printf("%d ", odd_array[i]);
    }
    return 0;
}

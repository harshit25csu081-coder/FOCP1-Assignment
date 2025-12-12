#include <stdio.h>
int main() {

    int choice;
    long long bin;
    int dec;
    long long place, binaryResult;
    int decimalResult, rem;

    printf("Number system converter\n");
    printf("1. Binary to Decimal\n");
    printf("2. Decimal to Binary\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if(choice == 1) {
        // Binary to Decimal
        printf("Enter binary number: ");
        scanf("%lld", &bin);

        decimalResult = 0;
        place = 1;

        while(bin > 0) {
            rem = bin % 10;
            decimalResult = decimalResult + rem * place;
            bin = bin / 10;
            place = place * 2;
        }

        printf("Decimal Value = %d\n", decimalResult);
    }

    else if(choice == 2) {
        // Decimal to Binary
        printf("Enter decimal number: ");
        scanf("%d", &dec);

        binaryResult = 0;
        place = 1;

        while(dec > 0) {
            rem = dec % 2;
            binaryResult = binaryResult + rem * place;
            dec = dec / 2;
            place = place * 10;
        }

        printf("Binary Value = %lld\n", binaryResult);
    }

    else {
        printf("Wrong choice...\n");
    }

    return 0;
}
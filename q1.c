#include <stdio.h>
#include <math.h>

int main() {
    int num, temp, remainder, sum = 0, digit = 0;

    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;
    while (temp != 0) {
        digit++;
        temp /= 10;
    }
    temp = num;
    while (temp != 0) {
        remainder = temp % 10;
        sum += pow(remainder, digit);
        temp /= 10;
    }
    if (num == sum)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}

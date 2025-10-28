#include <stdio.h>

int main() {
    int marks[10] = {90, 99, 85, 99, 76, 88, 99, 92, 70, 99};
    int i, count = 0;
printf("Students who scored 99 marks:\n");
    for(i = 0; i < 10; i++) {
        if(marks[i] == 99) {
            printf("Student %d\n", i + 1);
            count++;
        }
    }
    printf("Total students who scored 99 = %d\n", count);

    return 0;
}

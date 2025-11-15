#include <stdio.h>
#include <string.h>
int main() {
    char word[100];
    scanf("%s", word);
    int x = 0, y = 0;
    int i = 0;
    while(word[i] == 'z') {
        x++;
        i++;
    }
    while(word[i] == 'o') {
        y++;
        i++;
    }
    if(word[i] != '\0') {
        printf("No");
        return 0;
    }
    if(2 * x == y) {
        printf("Yes");
    } else {
        printf("No");
    }
    return 0;
}
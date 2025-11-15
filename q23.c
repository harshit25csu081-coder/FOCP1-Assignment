#include <stdio.h>
int main() {
    int t;  
    scanf("%d", &t);
    while (t--) {
        int costGreen, costPurple;
        scanf("%d %d", &costGreen, &costPurple);
        int n;  
        scanf("%d", &n);
        int p1Solve = 0;  
        int p2Solve = 0;  
        for (int i = 0; i < n; i++) {
            int a, b;
            scanf("%d %d", &a, &b);
            if (a == 1)  
                p1Solve++;
            if (b == 1)  
                p2Solve++;
        }
        int option1 = p1Solve * costGreen + p2Solve * costPurple;
        int option2 = p1Solve * costPurple + p2Solve * costGreen;
        if (option1 < option2)
            printf("%d\n", option1);
        else
            printf("%d\n", option2);
    }
    return 0;
}


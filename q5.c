#include <stdio.h>
int main() {
    float x, y;
    printf("Enter x and y: ");
    scanf("%f %f", &x, &y);
    if (x > 0 && y > 0)
        printf("First Quadrant\n");
    else if (x < 0 && y > 0)
        printf("Second Quadrant\n");
    else if (x < 0 && y < 0)
        printf("Third Quadrant\n");
    else if (x > 0 && y < 0)
        printf("Fourth Quadrant\n");
    else if (x == 0 && y == 0)
        printf("Origin\n");
    else if (x == 0)
        printf("On Y-axis\n");
    else if (y == 0)
        printf("On X-axis\n");
    return 0;
}

#include <stdio.h>

int main() {
    float x , y;
    scanf("%f", &x);
    y = 7 * x * x * x * x - 8 * x * x * x - x * x + 6 * x - 22;
    printf("%.1f", y);
    return 0;
}

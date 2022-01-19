#include <stdio.h>

int main() {
    int  A, B, C, D ,x ,y ,z = 0;

    scanf("%d%d%d%d", &A, &B, &C, &D);
    x = A;
    y = A - B + C;
    z = y - D;
    printf("%.4d %.4d %.4d", x, y, z);
    return 0;
}

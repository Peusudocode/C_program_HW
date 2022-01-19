#include <stdio.h>

int main() {
    int x, y ,z =0;
    scanf("%d%d", &x,&y);
    z = x + y;
    printf("  %.4d\n+)%.4d\n------\n%.6d", x, y, z);
    return 0;
}

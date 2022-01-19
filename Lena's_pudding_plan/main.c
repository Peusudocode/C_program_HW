#include <stdio.h>

int main() {
    int a, b, c, x, y;
    scanf("%d %d %d", &a, &b, &c);
    x = ( a + b + c ) / 7;
    y = ( a + b + c ) % 7;
    printf("%d %d", x, y);
    return 0;
}

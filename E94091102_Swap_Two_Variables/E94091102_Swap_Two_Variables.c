#include <stdio.h>

int main(void) {
    int a, b, k;
    printf("Swap Two integers in two variables, please type two integers as input a and b!\n");
    scanf("%d %d", &a, &b);
    k = a;
    a = b;
    b = k;
    printf("After the swap function,%d %d\n", a, b);
    return 0;
}

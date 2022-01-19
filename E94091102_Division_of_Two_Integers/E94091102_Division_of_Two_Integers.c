#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    float k;
    k = (float)a/(float)b;
    printf("%.1f %.2f\n", k,k);
   return 0;
}

#include <stdio.h>
#define PI 3.14f
int main() {
    int a;
    scanf("%d", &a);
    float area = (float)a*(float)a*PI;
    float length = 2.0*(float)a*PI;
    printf("%.2f %.2f", area, length);
    return 0;
}

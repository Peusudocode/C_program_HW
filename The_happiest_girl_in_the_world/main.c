#include <stdio.h>

int main() {
    float h, second;
    second = 0;
    scanf("%f", &h);
    while((h - (0.5 * 9.8 * second * second)) > 0){
        printf("%.1f\n", (h - (0.5 * 9.8 * second * second)));
        second++;
    }
    return 0;
}

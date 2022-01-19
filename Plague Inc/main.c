#include <stdio.h>

int main() {
    long double R;
    int N;
    scanf("%lf %ld", &R, &N);
    long double b = 1.0;
    for (int i = 0; i < N; i++){
        b = b * R;
        printf("%f", &b);
    }
    int k = (int)b;
    printf("%d", &k);
    return 0;
}

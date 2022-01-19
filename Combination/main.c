#include <stdio.h>

int main() {
    int n, m, total;
    total = 1;
    scanf("%d %d", &m, &n);
    int j = m;
    for(int i = 0; i < n ; i++){
        total = total * j;
        j--;
    }
    for (int i = 1; i <= n; i++){
        total = total / i;
    }
    printf("%d", total);
    return 0;
}

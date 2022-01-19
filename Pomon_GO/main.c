#include <stdio.h>

int main() {
    int n, cp, hp ,s, a;
    scanf("%d %d %d %d", &n, &cp, &hp, &s);
    a = 0;
    if ( cp < 100){
        a++;
    }
    else if ( cp >= 100 && cp <= 600){
        a = a + 5;
        if ( hp > 100){
            a = a + 3;
        }
    }
    else if ( cp > 600){
        a = a + 15;
        if ( hp > 200){
            a = a + 10;
        }
    }
    n = n - a;
    if ( s > 4 && a > 6){
        n = 0;
    }
    if ( n > 0){
        printf("YES\n");
        printf("%d", n);
    }
    else if ( n <= 0){
        printf("NO");
    }
    return 0;
}

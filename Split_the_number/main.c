#include <stdio.h>

int main() {
    int x, a, b, c;
    scanf("%d", &x);
    if ( x > 99){
        a = x % 10;
        b = (x / 10) % 10;
        c = ((x / 10) / 10) % 10;
    }
    else if ( x < 100 && x > 9){
        c = 0;
        b = ( x / 10 ) % 10;
        a = x % 10;
    }
    else if ( x < 10){
        c = 0;
        b = 0;
        a = x % 10;
    }

    printf("%d %d %d", c, b, a);
    return 0;
}

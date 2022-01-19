#include <stdio.h>

int main() {
    int S1, L = 1, M = 0;
    scanf("%d", &S1);
    do {
        if( ( S1 % 2) == 1){
            if ( S1 > M){
                M = S1;
            }
            S1 = 3 * S1 + 1;
            ++L;
        }
        else if( (S1%2) == 0){
            if ( S1 > M){
                M = S1;
            }
            S1 = S1 / 2;
            ++L;
        }
    }while( S1 != 1);
    printf("%d %d", L, M);
    return 0;
}

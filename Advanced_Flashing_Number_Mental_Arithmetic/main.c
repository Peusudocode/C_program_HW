#include <stdio.h>

int main() {
    unsigned long int N, S, K, sum;
    scanf("%d", &N);
    S = 10;
    sum = 0;
    do{
        scanf("%d", &S);
        if ( S == 6){
            scanf("%ld", &K);
            int a = 0;
            do{
                int i = K % 10;
                printf("%d\n", i);
                K = K / 10;
                if (a != 0){
                    int q = a;
                    do{
                        i = i * 6;
                        a--;
                    }while(a>0);
                    a = q;
                }
                if (i <= 999999999){
                    sum += i;
                    printf("%lu\n", sum );
                }
                a++;
            }while(K > 0);

        }
        else if ( S == 8){
            scanf("%lo", &K);
            if (K <= 999999999){
                sum += K;
                printf("%lu\n", sum );
            }
        }
        else if ( S == 10){
            scanf("%lu", &K);
            printf("%lu\n", K );
            if (K <= 999999999){
                sum += K;
                printf("%lu\n", sum );
            }
        }
        else if ( S == 16){
            scanf("%lx", &K);
            if (K <=999999999){
                sum += K;
                printf("%lu\n", sum );
            }
        }
        N--;
    }while(N > 0);
    printf("%lu\n", sum );
    sum = sum % 1000000007;
    printf("%lu", sum );
    return 0;
}

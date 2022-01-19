#include <stdio.h>

int main() {
    int h, k;
    k = 1;
    scanf("%d", &h);
    while(h >= 1){
        if (h!=1){
            for ( int i =0; i < (h-1); i++){
                printf(" ");
            }
            for (int j = 0; j < k; j++){
                if ((j%2) == 0){
                    printf("O");
                }
                else if ((j%2) == 1){
                    printf("X");
                }
            }
            printf("\n");
        }
       if (h==1){
           for (int l = 0; l < k; l++){
               printf("O");
           }
       }
       k = k + 2;
       h--;
    }
    return 0;
}

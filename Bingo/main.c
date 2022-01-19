#include <stdio.h>
#include <stdint.h>

int bingo (unsigned char c[]){
    int real_bingo[8][8];
    int line = 0;
    for (int i = 0; i < 8; i++){
        int k = 0;
        for (int j = 7; j >= 0; j--){
            real_bingo[i][k] = (c[i] >> j) & 1 ? : 0;
            k++;
        }
    }
    //horizon, straight
    for (int i = 0; i < 8; i++){
        int horizon = 0;
        int straight = 0;
        for (int j = 0; j < 8; j++){
            horizon += real_bingo[i][j];
            straight += real_bingo[j][i];
        }
        if (horizon == 8){
            line++;
        }
        if (straight == 8){
            line++;
        }
    }
    //tilt
    int tilt1 = 0, tilt2 = 0;
    for (int i = 0; i < 8; i++){
        tilt1 += real_bingo[i][i];
        tilt2 += real_bingo[7-i][i];
    }
    if (tilt1 >= 8){
        line++;
    }
    if (tilt2 >= 8){
        line++;
    }
    return line;
}

int main () {
    unsigned char num[8];
    printf("input_bingo:\n");
    for (int i = 0; i < 8; i++) {
        scanf("%hhu", &num[i]);
        for (int j = 7; j >= 0; j--){
            printf("%d", (num[i] >> j) & 1 ? : 0) ;
        }
        printf("\n");
    }
    printf("%d\n", bingo(num));
    return 0;
}
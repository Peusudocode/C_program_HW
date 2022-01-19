#include <stdio.h>

int main() {
    int x, m, c, X, i;
    scanf("%d", &x);
    if ( x > 999){
        m = x / 1000;
        for (int a = 0; a < m; a++){
            printf("M");
        }
        x = x - 1000 * m;
    }
    if ( x > 99){
        if ( x == 999){
            printf("IM");
            x = x - 999;
        }
        if ( x >= 900){
            printf("CM");
            x = x - 900;
        }
        else if ( x >= 500){
            printf("D");
            x = x - 500;
            c = x / 100;
            for (int k = 0; k < c; k++ ){
                printf("C");
                x = x - 100;
            }
        }
        else if ( x == 499){
            printf("ID");
            x = x - 499;
        }
        else if( x < 500 && x >= 400){
            printf("CD");
            x = x - 400;
        }
        else if ( x < 400){
            c = x / 100;
            for (int k = 0; k < c; k++ ){
                printf("C");
                x = x - 100;
            }
        }
    }
    if ( x > 9){
        if ( x == 99){
            printf("IC");
            x = x - 99;
        }
        else if ( x >= 90){
            printf("XC");
            x = x - 90;
        }
        else if ( x < 90 && x >= 50 ){
            printf("L");
            x = x - 50;
            X = x / 10;
            for (int g = 0; g < X; g++){
                printf("X");
                x = x - 10;
            }
        }
        else if ( x == 49){
            printf("IL");
            x = x - 49;
        }
        else if ( x < 50){
            if ( x >= 40){
                printf("XL");
                x - 40;
            }
            else if ( x < 40){
                X = x / 10;
                for (int g = 0; g < X; g++){
                    printf("X");
                    x = x - 10;
                }
            }
        }
    }
    if ( x == 9){
        printf("IX");
    }
    else if ( x < 9 && x >=5){
        printf("V");
        x = x - 5;
        i = x;
        for (int f = 0; f < i; f++){
            printf("I");
        }
    }
    else if ( x == 4){
        printf("IV");
    }
    else if ( x < 4){
        i = x;
        for (int f = 0; f < i; f++){
            printf("I");
        }
    }
    return 0;
}

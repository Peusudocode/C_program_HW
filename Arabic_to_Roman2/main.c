#include <stdio.h>

int main() {
    int x, m, c, X, i;
    scanf("%d", &x);
    m = x / 1000;
    x = x - 1000 * m;
    switch (m) {
        case 1: printf("M");
                break;
        case 2: printf("MM");
                break;
        case 3: printf("MMM");
                break;
        default:break;
    }
    if ( x == 999){
        printf("IM");
        x = x - 999;
    }
    else if ( x >= 900 && x < 999){
        printf("CM");
        x = x - 900;
    }
    else if (x >= 500 && x < 900){
        printf("D");
        x = x - 500;
    }
    else if (x >= 400 && x < 500){
        printf("CD");
        x = x - 400;
    }
    c = x / 100;
    x = x - 100 * c;
    switch (c) {
        case 1: printf("C");
            break;
        case 2: printf("CC");
            break;
        case 3: printf("CCC");
            break;
        default:break;
    }
    if ( x == 99){
        printf("IC");
        x = x - 99;
    }
    else if ( x >= 90 && x < 99){
        printf("XC");
        x = x - 90;
    }
    else if ( x >= 50 && x < 90){
        printf("L");
        x = x - 50;
    }
    else if ( x >= 40 && x < 50){
        printf("XL");
        x = x - 40;
    }
    X = x / 10;
    x = x - 10 * X;
    switch (X) {
        case 1: printf("X");
            break;
        case 2: printf("XX");
            break;
        case 3: printf("XXX");
            break;
        default:break;
    }
    if ( x == 9){
        printf("IX");
        x = x - 9;
    }
    else if ( x >= 5 && x < 9){
        printf("V");
        x = x - 5;
    }
    else if ( x == 4){
        printf("IV");
        x = x - 4;
    }
    i = x;
    x = x - i;
    switch (i) {
        case 1: printf("I");
            break;
        case 2: printf("II");
            break;
        case 3: printf("III");
            break;
        default:break;
    }
    return 0;
}

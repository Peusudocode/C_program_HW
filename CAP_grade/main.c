#include <stdio.h>

int main() {
    float ch, ma, en ,so, sc;
    int grade, point, a, b, c;
    grade = 0;
    point = 0;
    a = 0;
    b = 0;
    c = 0;
    scanf("%f %f %f %f %f", &ch, &en, &ma, &so, &sc);
    if ( ch > 40){
        a++;
        grade = grade + 6;
        if ( ch > 44){
            point = point + 7;
        }
        else if ( ch <= 44 && ch > 42){
            point = point + 6;
        }
        else if ( ch <= 42 && ch > 40){
            point = point + 5;
        }
    }
    else if ( ch <= 40 && ch > 18){
        b++;
        grade = grade + 4;
        if ( ch > 35){
            point = point + 4;
        }
        else if ( ch <= 35 && ch > 30){
            point = point + 3;
        }
        else if ( ch <= 30 && ch > 19){
            point = point + 2;
        }
    }
    else if ( ch <= 18){
        c++;
        grade = grade + 2;
        point = point + 1;
    }
    if ( en >= 90.24){
        a++;
        grade = grade + 6;
        if ( en >= 98.05){
            point = point + 7;
        }
        else if ( en <= 97.14 && en >= 95.15){
            point = point + 6;
        }
        else if ( en <= 94.29 && en >= 90.24){
            point = point + 5;
        }
    }
    else if ( en <= 89.52 && en >= 38.75){
        b++;
        grade = grade + 4;
        if ( en >= 81.58){
            point = point + 4;
        }
        else if ( en <= 81.53 && en >= 69.83){
            point = point + 3;
        }
        else if ( en <= 69.78 && en >= 38.75){
            point = point + 2;
        }
    }
    else if ( en <= 38.7){
        c++;
        grade = grade + 2;
        point = point + 1;
    }
    if ( ma >= 81.73){
        a++;
        grade = grade + 6;
        if ( ma >= 94.23){
            point = point + 7;
        }
        else if ( ma <= 93.46 && ma >= 90.19){
            point = point + 6;
        }
        else if ( ma <= 90 && ma >= 81.73){
            point = point + 5;
        }
    }
    else if ( ma <= 81.15 && ma >= 40.96){
        b++;
        grade = grade + 4;
        if ( ma >= 72.12){
            point = point + 4;
        }
        else if ( ma <= 71.92 && ma >= 63.08){
            point = point + 3;
        }
        else if ( ma <= 62.31 && ma >= 40.96){
            point = point + 2;
        }
    }
    else if ( ma <= 40.19){
        c++;
        grade = grade + 2;
        point = point + 1;
    }
    if ( so >= 56){
        a++;
        grade = grade + 6;
        if ( so >= 61){
            point = point + 7;
        }
        else if ( so <= 60 && so >= 59){
            point = point + 6;
        }
        else if ( so <= 58 && so >= 56){
            point = point + 5;
        }
    }
    else if ( so <= 55 && so >= 23){
        b++;
        grade = grade + 4;
        if ( so >= 48){
            point = point + 4;
        }
        else if ( so <= 47 && so >= 39){
            point = point + 3;
        }
        else if ( so <= 38 && so >= 23){
            point = point + 2;
        }
    }
    else if ( so <= 22){
        c++;
        grade = grade + 2;
        point = point + 1;
    }
    if ( sc >= 46){
        a++;
        grade = grade + 6;
        if ( sc >= 52){
            point = point + 7;
        }
        else if ( sc <= 51 && sc >= 50){
            point = point + 6;
        }
        else if ( sc <= 49 && sc >= 46){
            point = point + 5;
        }
    }
    else if ( sc <= 45 && sc >= 20){
        b++;
        grade = grade + 4;
        if ( sc >= 38){
            point = point + 4;
        }
        else if ( sc <= 37 && sc >= 31){
            point = point + 3;
        }
        else if ( sc <= 30 && sc >= 20){
            point = point + 2;
        }
    }
    else if ( sc <= 19){
        c++;
        grade = grade + 2;
        point = point + 1;
    }
    printf("%d/%d(", grade, point);
    switch (a) {
        case 1: printf("1A");
                break;
        case 2: printf("2A");
                break;
        case 3: printf("3A");
                break;
        case 4: printf("4A");
                break;
        case 5: printf("5A");
                break;
        default:break;
    }
    switch (b) {
        case 1: printf("1B");
            break;
        case 2: printf("2B");
            break;
        case 3: printf("3B");
            break;
        case 4: printf("4B");
            break;
        case 5: printf("5B");
            break;
        default:break;
    }
    switch (c) {
        case 1: printf("1C");
            break;
        case 2: printf("2C");
            break;
        case 3: printf("3C");
            break;
        case 4: printf("4C");
            break;
        case 5: printf("5C");
            break;
        default:break;
    }
    printf(")");
    return 0;
}

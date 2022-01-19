#include <stdio.h>
int sugar_fuc(int sugar){
    int sugar_cost;
    switch (sugar) {
        case 1: sugar_cost = 0;
            break;
        case 2: sugar_cost = 3;
            break;
        case 3: sugar_cost = 5;
            break;
        case 4: sugar_cost = 7;
            break;
        case 5: sugar_cost = 10;
            break;
    }
    return sugar_cost;
}
int ice_fuc (int ice){
    int ice_cost;
    switch (ice) {
        case 1: ice_cost = 0;
            break;
        case 2: ice_cost = 30;
            break;
        case 3: ice_cost = 50;
            break;
        case 4: ice_cost = 70;
            break;
        case 5: ice_cost = 100;
            break;
    }
    return ice_cost;
}
int main() {
    int black_tea, White_gourd, Tieguanyin_tea, green_tea, milk, sugar, ice, earn = 0;
    scanf("%d %d %d %d %d %d %d", &black_tea, &White_gourd, &Tieguanyin_tea, &green_tea, &milk, &sugar, &ice);
    black_tea *= 1000;
    White_gourd *= 1000;
    Tieguanyin_tea *= 1000;
    green_tea *= 1000;
    milk *= 1000;
    sugar *= 1000;
    ice *= 1000;
    int sales;
    scanf("%d", &sales);
    int sugar_cost, ice_cost;
    char item;
    while(sales > 0){
        item = getchar();
        if (item == 'W'){
            item = getchar();
            if (item == 'M'){
                scanf("%d/%d", &sugar_cost, &ice_cost);
                sugar_cost = sugar_fuc(sugar_cost);
                ice_cost = ice_fuc(ice_cost);
                milk -= 300;
                White_gourd -= 200;
                sugar -= sugar_cost;
                ice -= ice_cost;
                earn += 30;
                sales --;
            }
            else if (item == 'T'){
                scanf("%d/%d", &sugar_cost, &ice_cost);
                sugar_cost = sugar_fuc(sugar_cost);
                ice_cost = ice_fuc(ice_cost);
                White_gourd -= 150;
                Tieguanyin_tea -= 350;
                sugar -= sugar_cost;
                ice -= ice_cost;
                earn += 40;
                sales --;
            }
            else{
                scanf("%d/%d", &sugar_cost, &ice_cost);
                sugar_cost = sugar_fuc(sugar_cost);
                ice_cost = ice_fuc(ice_cost);
                White_gourd -= 500;
                sugar -= sugar_cost;
                ice -= ice_cost;
                earn += 15;
                sales --;
            }
        }
        else if (item == 'G'){
            item = getchar();
            if (item == 'T'){
                scanf("%d/%d", &sugar_cost, &ice_cost);
                sugar_cost = sugar_fuc(sugar_cost);
                ice_cost = ice_fuc(ice_cost);
                Tieguanyin_tea -= 250;
                green_tea -= 250;
                sugar -= sugar_cost;
                ice -= ice_cost;
                earn += 45;
                sales --;
            }
            else{
                scanf("%d/%d", &sugar_cost, &ice_cost);
                sugar_cost = sugar_fuc(sugar_cost);
                ice_cost = ice_fuc(ice_cost);
                green_tea -= 500;
                sugar -= sugar_cost;
                ice -= ice_cost;
                earn += 20;
                sales --;
            }
        }
        else if (item == 'B'){
            item = getchar();
            if (item == 'M'){
                scanf("%d/%d", &sugar_cost, &ice_cost);
                sugar_cost = sugar_fuc(sugar_cost);
                ice_cost = ice_fuc(ice_cost);
                black_tea -= 200;
                milk -= 300;
                sugar -= sugar_cost;
                ice -= ice_cost;
                earn += 35;
                sales --;
            }
            else {
                scanf("%d/%d", &sugar_cost, &ice_cost);
                sugar_cost = sugar_fuc(sugar_cost);
                ice_cost = ice_fuc(ice_cost);
                black_tea -= 500;
                sugar -= sugar_cost;
                ice -= ice_cost;
                earn += 20;
                sales --;
            }
        }
        else if (item == 'T'){
            item = getchar();
            if (item == 'M'){
                scanf("%d/%d", &sugar_cost, &ice_cost);
                sugar_cost = sugar_fuc(sugar_cost);
                ice_cost = ice_fuc(ice_cost);
                Tieguanyin_tea -= 200;
                milk -= 300;
                sugar -= sugar_cost;
                ice -= ice_cost;
                earn += 45;
                sales --;
            }
            else {
                scanf("%d/%d", &sugar_cost, &ice_cost);
                sugar_cost = sugar_fuc(sugar_cost);
                ice_cost = ice_fuc(ice_cost);
                Tieguanyin_tea -= 500;
                sugar -= sugar_cost;
                ice -= ice_cost;
                earn += 30;
                sales --;
            }
        }
    }
    printf("%d %d %d %d %d %d %d\n", black_tea, White_gourd, Tieguanyin_tea, green_tea, milk, sugar, ice);
    printf("%d", earn);
    return 0;
}

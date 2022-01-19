#include <stdio.h>
#include <string.h>
#define MAX_LEN_ORDER 1000
#define MAX_ORDER 30
int main() {
    int distance, blood;
    scanf("%d %d", &distance, &blood);
    char move_forward[] = "PATA PATA PATA PON\0";
    char attack[] = "PON PON PATA PON\0";
    char defend[] ="CHAKA CHAKA PATA PON\0";
    char order[MAX_ORDER];
    char all_order[MAX_LEN_ORDER], k = getchar();
    int status = 1;
    fgets(all_order, MAX_LEN_ORDER, stdin);
    int i = 0, order_amount = 0;
    all_order[i] = '\0';
    int len = strlen(all_order);
    i=0;
    while(all_order[i] != '\0'){
        int j = 0;
        while(all_order[i] != ',' && all_order[i] != '.' && all_order[i] != '\0'){
            order[j] = all_order[i];
            j++;
            i++;
        }
        order[j] = '\0';
        if(strcmp(order, move_forward) == 0){
            order_amount++;
            distance--;
        }
        else if(strcmp(order, attack) == 0){
            if (distance <= 3){
                blood --;
            }
            order_amount++;
        }
        else if(strcmp(order, defend) == 0){
            distance++;
            order_amount++;
            status = 2;
        }
        if(distance <= 0){
            status = 0;
            break;
        }
        if(blood == 0){
            status = 3;
            break;
        }
        if(order_amount % 10 == 0){
            if(status != 2){
                status = 0;
                break;
            }
        }
        i++;
        status = 1;
    }
    if (status == 3){
        printf("Yes %d", order_amount);
    }
    else{
        printf("NO %d", blood);
    }

    return 0;
}

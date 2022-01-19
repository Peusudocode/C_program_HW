#include <stdio.h>
int *report_card (int *s){
    int *start_position;
    int count = 0;
    int sum = 0;
    int largest_count = 0;
    do{
        if (*s >= 60){
            count++;
            s++;
        }
        else if (*s < 60){
            printf("%d\n", *s);
            if(count !=0){
                if(largest_count < count){
                    int *check;
                    check = s - count;
                    for(int i = 0; i < count; i++){
                        sum += *check;
                        check++;
                    }
                    start_position = s - count;
                    largest_count = count;
                }
                else if(largest_count == count){
                    int *check;
                    check = s - count;
                    int second_sum = 0;
                    for(int i = 0; i < count; i++){
                        second_sum += *check;
                        check++;
                    }
                    if (sum < second_sum) {
                        start_position = s - count;
                        sum = second_sum;
                    }
                }
                s++;
                count = 0;
            }
            else{
                s++;
            }
        }
    }while(*s != -1);
    *(start_position+largest_count) = -1;
    return start_position;
}

int main () {
    int score[1001];
    int *show;
    int count = 0;

    do {
        scanf("%d", &score[count++]);
    } while (score[count - 1] != -1);

    show = report_card(score);

    count = 0;
    while (*(show + count) != -1) {
        printf("%d ", *(show + count));
        count++;
    }
}
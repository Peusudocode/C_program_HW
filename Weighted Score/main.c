#include <stdio.h>
#include <string.h>
struct weight {
    char chapter[10];
    int percent;
};

struct score {
    char chapter[10];
    int score;
};

struct report_card {
    char name[32];
    struct score record[10];
    int final;
    int max_score;
    int min_score;
};

void calculate (struct report_card card[], struct weight chapter[], int student_num, int chapter_num){
    for (int i = 0; i < student_num; i++){
        int final_score = 0, large_score = 0, small_score = 100, weight;
        for(int j= 0; j < chapter_num; j++){
            if(large_score <= card[i].record[j].score){
                large_score = card[i].record[j].score;
            }
            if (small_score >= card[i].record[j].score){
                small_score = card[i].record[j].score;
            }
            int k = 0;
            while(strcmp(card[i].record[j].chapter, chapter[k].chapter) != 0){
                k++;
            }
            weight = chapter[k].percent;
            final_score += card[i].record[j].score * weight;
        }
        card[i].final = final_score / 100;
        card[i].max_score = large_score;
        card[i].min_score = small_score;
    }
}


int main () {
    int student_num, chapter_num;
    struct weight chapter[10];
    struct report_card card[100];

    scanf("%d %d\n", &chapter_num, &student_num);
    for (int i = 0; i < chapter_num; ++i) {
        scanf("%d %s", &chapter[i].percent, chapter[i].chapter);
    }

    for (int i = 0; i < student_num; ++i) {
        scanf("%s", card[i].name);
        for (int j = 0; j < chapter_num; ++j) {
            scanf("%d %s", &card[i].record[j].score, card[i].record[j].chapter);
        }
    }

    calculate(card, chapter, student_num, chapter_num);

    for (int i = 0; i < student_num; ++i) {
        printf("%s %d %d %d\n", card[i].name, card[i].final, card[i].max_score, card[i].min_score);
    }
}
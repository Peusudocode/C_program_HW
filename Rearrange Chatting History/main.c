#include <stdio.h>
#include <stdlib.h>
#define MESSAGE_LENGTH 64
#define NAME_LENGTH 10

struct timestamp {
    int hour, minute;
};

struct message_info {
    struct timestamp time;
    char name[NAME_LENGTH];
    char message[MESSAGE_LENGTH];
};

int cmp(const void *a, const void *b){
    struct timestamp *time_a = (struct timestamp*)a;
    struct timestamp *time_b = (struct timestamp*)b;
    if (time_a->hour > time_b->hour){
        return 1;
    }
    else if (time_a->hour == time_b->hour && time_a->minute > time_b->minute){
        return 1;
    }
    else {
        return -1;
    }
}
void sort_message(struct message_info *m, int *total){
    qsort(m, *total, sizeof (struct message_info), cmp);
}

int main(void) {
    struct message_info m[100];
    int total;
    scanf("%d", &total);
    for(int i = 0; i < total; i++)
        scanf("%d:%d %s %[^\n]", &m[i].time.hour, &m[i].time.minute, m[i].name, m[i].message);
    sort_message(m, &total);
    for(int i = 0; i < total; i++)
        printf("%02d:%02d %s %s\n", m[i].time.hour, m[i].time.minute, m[i].name, m[i].message);
    return 0;
}
